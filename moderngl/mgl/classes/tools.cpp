#include "tools.hpp"

/* Detects a class defined in python.
 */
PyTypeObject * detect_class(PyObject * module, const char * name, int & slots_len) {
    if (!module || PyErr_Occurred()) {
        return 0;
    }

    PyObject * cls = PyObject_GetAttrString(module, name);
    if (!cls) {
        return 0;
    }

    PyObject * slots = PyObject_GetAttrString(cls, "__slots__");
    if (!slots) {
        return 0;
    }

    slots_len = (int)PyObject_Size(slots);
    return (PyTypeObject *)cls;
}

/* Returns the offset of a given slot.
 */
int slot_offset(PyTypeObject * type, const char * name, int & counter) {
    if (!type || PyErr_Occurred()) {
        return 0;
    }
    counter -= 1;
    for (int i = 0; type->tp_members[i].name; ++i) {
        if (!strcmp(type->tp_members[i].name, name)) {
            return type->tp_members[i].offset;
        }
    }

    PyErr_Format(PyExc_Exception, "missing slot %s in %s", name, type->tp_name);
    return 0;
}

/* Ensures that all the slots are processed.
 */
void assert_slots_len(PyTypeObject * type, int slots_len) {
    if (!slots_len || PyErr_Occurred()) {
        return;
    }

    PyErr_Format(PyExc_Exception, "remaining slots in %s", type->tp_name);
}

/* Define python class using a PyType_Slot array defined on the stack.
 * This method duplicates tp_methods, tp_getset and tp_members.
 */
PyTypeObject * define_python_class(const char * name, int size, PyType_Slot * slots) {
    int num_slots = 0;
    while (slots[num_slots].slot) {
        num_slots += 1;
    }

    PyType_Slot * new_slots = new PyType_Slot[num_slots + 1];
    for (int i = 0; i < num_slots; ++i) {
        new_slots[i].slot = slots[i].slot;

        switch (new_slots[i].slot) {
            case Py_tp_methods: {
                PyMethodDef * methods = (PyMethodDef *)slots[i].pfunc;
                if (!methods) {
                    new_slots[i].pfunc = 0;
                    break;
                }
                int num_methods = 0;
                while (methods[num_methods].ml_name) {
                    num_methods += 1;
                }
                PyMethodDef * new_methods = new PyMethodDef[num_methods + 1];
                for (int j = 0; j < num_methods; ++j) {
                    new_methods[j].ml_name = methods[j].ml_name;
                    new_methods[j].ml_meth = methods[j].ml_meth;
                    new_methods[j].ml_flags = methods[j].ml_flags;
                    new_methods[j].ml_doc = methods[j].ml_doc;
                }
                new_methods[num_methods].ml_name = 0;
                new_methods[num_methods].ml_meth = 0;
                new_methods[num_methods].ml_flags = 0;
                new_methods[num_methods].ml_doc = 0;
                new_slots[i].pfunc = new_methods;
                break;
            }

            case Py_tp_getset: {
                PyGetSetDef * getset = (PyGetSetDef *)slots[i].pfunc;
                if (!getset) {
                    new_slots[i].pfunc = 0;
                    break;
                }
                int num_getset = 0;
                while (getset[num_getset].name) {
                    num_getset += 1;
                }
                PyGetSetDef * new_getset = new PyGetSetDef[num_getset + 1];
                for (int j = 0; j < num_getset; ++j) {
                    new_getset[j].name = getset[j].name;
                    new_getset[j].get = getset[j].get;
                    new_getset[j].set = getset[j].set;
                    new_getset[j].doc = getset[j].doc;
                    new_getset[j].closure = getset[j].closure;
                }
                new_getset[num_getset].name = 0;
                new_getset[num_getset].get = 0;
                new_getset[num_getset].set = 0;
                new_getset[num_getset].doc = 0;
                new_getset[num_getset].closure = 0;
                new_slots[i].pfunc = new_getset;
                break;
            }

            case Py_tp_members: {
                PyMemberDef * members = (PyMemberDef *)slots[i].pfunc;
                if (!members) {
                    new_slots[i].pfunc = 0;
                    break;
                }
                int num_members = 0;
                while (members[num_members].name) {
                    num_members += 1;
                }
                PyMemberDef * new_members = new PyMemberDef[num_members + 1];
                for (int j = 0; j < num_members; ++j) {
                    new_members[j].name = members[j].name;
                    new_members[j].type = members[j].type;
                    new_members[j].offset = members[j].offset;
                    new_members[j].flags = members[j].flags;
                    new_members[j].doc = members[j].doc;
                }
                new_members[num_members].name = 0;
                new_members[num_members].type = 0;
                new_members[num_members].offset = 0;
                new_members[num_members].flags = 0;
                new_members[num_members].doc = 0;
                new_slots[i].pfunc = new_members;
                break;
            }

            default:
                new_slots[i].pfunc = slots[i].pfunc;
                break;
        }
    }

    new_slots[num_slots].slot = 0;
    new_slots[num_slots].pfunc = 0;

    PyType_Spec * new_spec = new PyType_Spec;
    new_spec->name = name;
    new_spec->basicsize = size;
    new_spec->itemsize = 0;
    new_spec->flags = Py_TPFLAGS_DEFAULT;
    new_spec->slots = new_slots;

    PyObject * type = PyType_FromSpec(new_spec);
    return (PyTypeObject *)type;
}