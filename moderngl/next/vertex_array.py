from typing import Any

from .buffer import Buffer
from .program import Program
from .scope import Scope


class VertexArray:
    __slots__ = ['__mglo', '__ibo', 'program', 'scope', 'mode', 'vertices', 'extra']

    def __init__(self):
        self.__mglo = None  # type: Any
        self.__ibo = None  # type: Buffer
        self.program = None  # type: Program
        self.scope = None  # type: Scope
        self.mode = None  # type: int
        self.vertices = None  # type: int
        self.extra = None  # type: Any

    def render(self, mode=None, vertices=-1, first=0, instances=1, color_mask=0xffffffffffffffff, depth_mask=1):
        self.__mglo.render(mode, vertices, first, instances, color_mask, depth_mask)

    def render_indirect(self, buffer, mode=None, count=-1, first=0, color_mask=0xffffffffffffffff, depth_mask=1):
        self.__mglo.render_indirect(mode, buffer, mode, count, first, color_mask, depth_mask)

    def transform(self, buffer, mode=None, vertices=-1, first=0, instances=1, flush=True):
        self.__mglo.transform(buffer, mode, vertices, first, instances, flush)

    @property
    def index_buffer(self):
        return self.__ibo

    @index_buffer.setter
    def index_buffer(self, value):
        self.__mglo.ibo = value
