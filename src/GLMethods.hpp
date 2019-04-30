#pragma once

#include "OpenGL.hpp"

typedef GLvoid (GLAPI * gl_attribute_normal_ptr_proc)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer);
typedef GLvoid (GLAPI * gl_attribute_ptr_proc)(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);

struct GLMethods {
	PROC_glActiveShaderProgram ActiveShaderProgram;
	PROC_glActiveTexture ActiveTexture;
	PROC_glAttachShader AttachShader;
	PROC_glBeginConditionalRender BeginConditionalRender;
	PROC_glBeginQuery BeginQuery;
	PROC_glBeginQueryIndexed BeginQueryIndexed;
	PROC_glBeginTransformFeedback BeginTransformFeedback;
	PROC_glBindAttribLocation BindAttribLocation;
	PROC_glBindBuffer BindBuffer;
	PROC_glBindBufferBase BindBufferBase;
	PROC_glBindBufferRange BindBufferRange;
	PROC_glBindBuffersBase BindBuffersBase;
	PROC_glBindBuffersRange BindBuffersRange;
	PROC_glBindFragDataLocation BindFragDataLocation;
	PROC_glBindFragDataLocationIndexed BindFragDataLocationIndexed;
	PROC_glBindFramebuffer BindFramebuffer;
	PROC_glBindImageTexture BindImageTexture;
	PROC_glBindImageTextures BindImageTextures;
	PROC_glBindProgramPipeline BindProgramPipeline;
	PROC_glBindRenderbuffer BindRenderbuffer;
	PROC_glBindSampler BindSampler;
	PROC_glBindSamplers BindSamplers;
	PROC_glBindTexture BindTexture;
	PROC_glBindTextureUnit BindTextureUnit;
	PROC_glBindTextures BindTextures;
	PROC_glBindTransformFeedback BindTransformFeedback;
	PROC_glBindVertexArray BindVertexArray;
	PROC_glBindVertexBuffer BindVertexBuffer;
	PROC_glBindVertexBuffers BindVertexBuffers;
	PROC_glBlendColor BlendColor;
	PROC_glBlendEquation BlendEquation;
	PROC_glBlendEquationSeparate BlendEquationSeparate;
	PROC_glBlendEquationSeparatei BlendEquationSeparatei;
	PROC_glBlendEquationi BlendEquationi;
	PROC_glBlendFunc BlendFunc;
	PROC_glBlendFuncSeparate BlendFuncSeparate;
	PROC_glBlendFuncSeparatei BlendFuncSeparatei;
	PROC_glBlendFunci BlendFunci;
	PROC_glBlitFramebuffer BlitFramebuffer;
	PROC_glBlitNamedFramebuffer BlitNamedFramebuffer;
	PROC_glBufferData BufferData;
	PROC_glBufferStorage BufferStorage;
	PROC_glBufferSubData BufferSubData;
	PROC_glCheckFramebufferStatus CheckFramebufferStatus;
	PROC_glCheckNamedFramebufferStatus CheckNamedFramebufferStatus;
	PROC_glClampColor ClampColor;
	PROC_glClear Clear;
	PROC_glClearBufferData ClearBufferData;
	PROC_glClearBufferSubData ClearBufferSubData;
	PROC_glClearBufferfi ClearBufferfi;
	PROC_glClearBufferfv ClearBufferfv;
	PROC_glClearBufferiv ClearBufferiv;
	PROC_glClearBufferuiv ClearBufferuiv;
	PROC_glClearColor ClearColor;
	PROC_glClearDepth ClearDepth;
	PROC_glClearDepthf ClearDepthf;
	PROC_glClearNamedBufferData ClearNamedBufferData;
	PROC_glClearNamedBufferSubData ClearNamedBufferSubData;
	PROC_glClearNamedFramebufferfi ClearNamedFramebufferfi;
	PROC_glClearNamedFramebufferfv ClearNamedFramebufferfv;
	PROC_glClearNamedFramebufferiv ClearNamedFramebufferiv;
	PROC_glClearNamedFramebufferuiv ClearNamedFramebufferuiv;
	PROC_glClearStencil ClearStencil;
	PROC_glClearTexImage ClearTexImage;
	PROC_glClearTexSubImage ClearTexSubImage;
	PROC_glClientWaitSync ClientWaitSync;
	PROC_glWaitSync WaitSync;
	PROC_glClipControl ClipControl;
	PROC_glColorMask ColorMask;
	PROC_glColorMaski ColorMaski;
	PROC_glCompileShader CompileShader;
	PROC_glCompressedTexImage1D CompressedTexImage1D;
	PROC_glCompressedTexImage2D CompressedTexImage2D;
	PROC_glCompressedTexImage3D CompressedTexImage3D;
	PROC_glCompressedTexSubImage1D CompressedTexSubImage1D;
	PROC_glCompressedTexSubImage2D CompressedTexSubImage2D;
	PROC_glCompressedTexSubImage3D CompressedTexSubImage3D;
	PROC_glCompressedTextureSubImage1D CompressedTextureSubImage1D;
	PROC_glCompressedTextureSubImage2D CompressedTextureSubImage2D;
	PROC_glCompressedTextureSubImage3D CompressedTextureSubImage3D;
	PROC_glCopyBufferSubData CopyBufferSubData;
	PROC_glCopyImageSubData CopyImageSubData;
	PROC_glCopyNamedBufferSubData CopyNamedBufferSubData;
	PROC_glCopyTexImage1D CopyTexImage1D;
	PROC_glCopyTexImage2D CopyTexImage2D;
	PROC_glCopyTexSubImage1D CopyTexSubImage1D;
	PROC_glCopyTexSubImage2D CopyTexSubImage2D;
	PROC_glCopyTexSubImage3D CopyTexSubImage3D;
	PROC_glCopyTextureSubImage1D CopyTextureSubImage1D;
	PROC_glCopyTextureSubImage2D CopyTextureSubImage2D;
	PROC_glCopyTextureSubImage3D CopyTextureSubImage3D;
	PROC_glCreateBuffers CreateBuffers;
	PROC_glCreateFramebuffers CreateFramebuffers;
	PROC_glCreateProgram CreateProgram;
	PROC_glCreateProgramPipelines CreateProgramPipelines;
	PROC_glCreateQueries CreateQueries;
	PROC_glCreateRenderbuffers CreateRenderbuffers;
	PROC_glCreateSamplers CreateSamplers;
	PROC_glCreateShader CreateShader;
	PROC_glCreateShaderProgramv CreateShaderProgramv;
	PROC_glCreateTextures CreateTextures;
	PROC_glCreateTransformFeedbacks CreateTransformFeedbacks;
	PROC_glCreateVertexArrays CreateVertexArrays;
	PROC_glCullFace CullFace;
	PROC_glDebugMessageCallback DebugMessageCallback;
	PROC_glDebugMessageControl DebugMessageControl;
	PROC_glDebugMessageInsert DebugMessageInsert;
	PROC_glDeleteBuffers DeleteBuffers;
	PROC_glDeleteFramebuffers DeleteFramebuffers;
	PROC_glDeleteProgram DeleteProgram;
	PROC_glDeleteProgramPipelines DeleteProgramPipelines;
	PROC_glDeleteQueries DeleteQueries;
	PROC_glDeleteRenderbuffers DeleteRenderbuffers;
	PROC_glDeleteSamplers DeleteSamplers;
	PROC_glDeleteShader DeleteShader;
	PROC_glDeleteSync DeleteSync;
	PROC_glDeleteTextures DeleteTextures;
	PROC_glDeleteTransformFeedbacks DeleteTransformFeedbacks;
	PROC_glDeleteVertexArrays DeleteVertexArrays;
	PROC_glDepthFunc DepthFunc;
	PROC_glDepthMask DepthMask;
	PROC_glDepthRange DepthRange;
	PROC_glDepthRangeArrayv DepthRangeArrayv;
	PROC_glDepthRangeIndexed DepthRangeIndexed;
	PROC_glDepthRangef DepthRangef;
	PROC_glDetachShader DetachShader;
	PROC_glDisable Disable;
	PROC_glDisableVertexArrayAttrib DisableVertexArrayAttrib;
	PROC_glDisableVertexAttribArray DisableVertexAttribArray;
	PROC_glDisablei Disablei;
	PROC_glDispatchCompute DispatchCompute;
	PROC_glDispatchComputeIndirect DispatchComputeIndirect;
	PROC_glDrawArrays DrawArrays;
	PROC_glDrawArraysIndirect DrawArraysIndirect;
	PROC_glDrawArraysInstanced DrawArraysInstanced;
	PROC_glDrawArraysInstancedBaseInstance DrawArraysInstancedBaseInstance;
	PROC_glDrawBuffer DrawBuffer;
	PROC_glDrawBuffers DrawBuffers;
	PROC_glDrawElements DrawElements;
	PROC_glDrawElementsBaseVertex DrawElementsBaseVertex;
	PROC_glDrawElementsIndirect DrawElementsIndirect;
	PROC_glDrawElementsInstanced DrawElementsInstanced;
	PROC_glDrawElementsInstancedBaseInstance DrawElementsInstancedBaseInstance;
	PROC_glDrawElementsInstancedBaseVertex DrawElementsInstancedBaseVertex;
	PROC_glDrawElementsInstancedBaseVertexBaseInstance DrawElementsInstancedBaseVertexBaseInstance;
	PROC_glDrawRangeElements DrawRangeElements;
	PROC_glDrawRangeElementsBaseVertex DrawRangeElementsBaseVertex;
	PROC_glDrawTransformFeedback DrawTransformFeedback;
	PROC_glDrawTransformFeedbackInstanced DrawTransformFeedbackInstanced;
	PROC_glDrawTransformFeedbackStream DrawTransformFeedbackStream;
	PROC_glDrawTransformFeedbackStreamInstanced DrawTransformFeedbackStreamInstanced;
	PROC_glEnable Enable;
	PROC_glEnableVertexArrayAttrib EnableVertexArrayAttrib;
	PROC_glEnableVertexAttribArray EnableVertexAttribArray;
	PROC_glEnablei Enablei;
	PROC_glEndConditionalRender EndConditionalRender;
	PROC_glEndQuery EndQuery;
	PROC_glEndQueryIndexed EndQueryIndexed;
	PROC_glEndTransformFeedback EndTransformFeedback;
	PROC_glFenceSync FenceSync;
	PROC_glFinish Finish;
	PROC_glFlush Flush;
	PROC_glFlushMappedBufferRange FlushMappedBufferRange;
	PROC_glFlushMappedNamedBufferRange FlushMappedNamedBufferRange;
	PROC_glFramebufferParameteri FramebufferParameteri;
	PROC_glFramebufferRenderbuffer FramebufferRenderbuffer;
	PROC_glFramebufferTexture FramebufferTexture;
	PROC_glFramebufferTexture1D FramebufferTexture1D;
	PROC_glFramebufferTexture2D FramebufferTexture2D;
	PROC_glFramebufferTexture3D FramebufferTexture3D;
	PROC_glFramebufferTextureLayer FramebufferTextureLayer;
	PROC_glFrontFace FrontFace;
	PROC_glGenBuffers GenBuffers;
	PROC_glGenFramebuffers GenFramebuffers;
	PROC_glGenProgramPipelines GenProgramPipelines;
	PROC_glGenQueries GenQueries;
	PROC_glGenRenderbuffers GenRenderbuffers;
	PROC_glGenSamplers GenSamplers;
	PROC_glGenTextures GenTextures;
	PROC_glGenTransformFeedbacks GenTransformFeedbacks;
	PROC_glGenVertexArrays GenVertexArrays;
	PROC_glGenerateMipmap GenerateMipmap;
	PROC_glGenerateTextureMipmap GenerateTextureMipmap;
	PROC_glGetActiveAtomicCounterBufferiv GetActiveAtomicCounterBufferiv;
	PROC_glGetActiveAttrib GetActiveAttrib;
	PROC_glGetActiveSubroutineName GetActiveSubroutineName;
	PROC_glGetActiveSubroutineUniformName GetActiveSubroutineUniformName;
	PROC_glGetActiveSubroutineUniformiv GetActiveSubroutineUniformiv;
	PROC_glGetActiveUniform GetActiveUniform;
	PROC_glGetActiveUniformBlockName GetActiveUniformBlockName;
	PROC_glGetActiveUniformBlockiv GetActiveUniformBlockiv;
	PROC_glGetActiveUniformName GetActiveUniformName;
	PROC_glGetActiveUniformsiv GetActiveUniformsiv;
	PROC_glGetAttachedShaders GetAttachedShaders;
	PROC_glGetAttribLocation GetAttribLocation;
	PROC_glGetBooleani_v GetBooleani_v;
	PROC_glGetBooleanv GetBooleanv;
	PROC_glGetBufferParameteri64v GetBufferParameteri64v;
	PROC_glGetBufferParameteriv GetBufferParameteriv;
	PROC_glGetBufferPointerv GetBufferPointerv;
	PROC_glGetBufferSubData GetBufferSubData;
	PROC_glGetCompressedTexImage GetCompressedTexImage;
	PROC_glGetCompressedTextureImage GetCompressedTextureImage;
	PROC_glGetCompressedTextureSubImage GetCompressedTextureSubImage;
	PROC_glGetDebugMessageLog GetDebugMessageLog;
	PROC_glGetDoublei_v GetDoublei_v;
	PROC_glGetDoublev GetDoublev;
	PROC_glGetError GetError;
	PROC_glGetFloati_v GetFloati_v;
	PROC_glGetFloatv GetFloatv;
	PROC_glGetFragDataIndex GetFragDataIndex;
	PROC_glGetFragDataLocation GetFragDataLocation;
	PROC_glGetFramebufferAttachmentParameteriv GetFramebufferAttachmentParameteriv;
	PROC_glGetFramebufferParameteriv GetFramebufferParameteriv;
	PROC_glGetGraphicsResetStatus GetGraphicsResetStatus;
	PROC_glGetInteger64i_v GetInteger64i_v;
	PROC_glGetInteger64v GetInteger64v;
	PROC_glGetIntegeri_v GetIntegeri_v;
	PROC_glGetIntegerv GetIntegerv;
	PROC_glGetInternalformati64v GetInternalformati64v;
	PROC_glGetInternalformativ GetInternalformativ;
	PROC_glGetMultisamplefv GetMultisamplefv;
	PROC_glGetNamedBufferParameteri64v GetNamedBufferParameteri64v;
	PROC_glGetNamedBufferParameteriv GetNamedBufferParameteriv;
	PROC_glGetNamedBufferPointerv GetNamedBufferPointerv;
	PROC_glGetNamedBufferSubData GetNamedBufferSubData;
	PROC_glGetNamedFramebufferAttachmentParameteriv GetNamedFramebufferAttachmentParameteriv;
	PROC_glGetNamedFramebufferParameteriv GetNamedFramebufferParameteriv;
	PROC_glGetNamedRenderbufferParameteriv GetNamedRenderbufferParameteriv;
	PROC_glGetObjectLabel GetObjectLabel;
	PROC_glGetObjectPtrLabel GetObjectPtrLabel;
	PROC_glGetPointerv GetPointerv;
	PROC_glGetProgramBinary GetProgramBinary;
	PROC_glGetProgramInfoLog GetProgramInfoLog;
	PROC_glGetProgramInterfaceiv GetProgramInterfaceiv;
	PROC_glGetProgramPipelineInfoLog GetProgramPipelineInfoLog;
	PROC_glGetProgramPipelineiv GetProgramPipelineiv;
	PROC_glGetProgramResourceIndex GetProgramResourceIndex;
	PROC_glGetProgramResourceLocation GetProgramResourceLocation;
	PROC_glGetProgramResourceLocationIndex GetProgramResourceLocationIndex;
	PROC_glGetProgramResourceName GetProgramResourceName;
	PROC_glGetProgramResourceiv GetProgramResourceiv;
	PROC_glGetProgramStageiv GetProgramStageiv;
	PROC_glGetProgramiv GetProgramiv;
	PROC_glGetQueryBufferObjecti64v GetQueryBufferObjecti64v;
	PROC_glGetQueryBufferObjectiv GetQueryBufferObjectiv;
	PROC_glGetQueryBufferObjectui64v GetQueryBufferObjectui64v;
	PROC_glGetQueryBufferObjectuiv GetQueryBufferObjectuiv;
	PROC_glGetQueryIndexediv GetQueryIndexediv;
	PROC_glGetQueryObjecti64v GetQueryObjecti64v;
	PROC_glGetQueryObjectiv GetQueryObjectiv;
	PROC_glGetQueryObjectui64v GetQueryObjectui64v;
	PROC_glGetQueryObjectuiv GetQueryObjectuiv;
	PROC_glGetQueryiv GetQueryiv;
	PROC_glGetRenderbufferParameteriv GetRenderbufferParameteriv;
	PROC_glGetSamplerParameterIiv GetSamplerParameterIiv;
	PROC_glGetSamplerParameterIuiv GetSamplerParameterIuiv;
	PROC_glGetSamplerParameterfv GetSamplerParameterfv;
	PROC_glGetSamplerParameteriv GetSamplerParameteriv;
	PROC_glGetShaderInfoLog GetShaderInfoLog;
	PROC_glGetShaderPrecisionFormat GetShaderPrecisionFormat;
	PROC_glGetShaderSource GetShaderSource;
	PROC_glGetShaderiv GetShaderiv;
	PROC_glGetString GetString;
	PROC_glGetStringi GetStringi;
	PROC_glGetSubroutineIndex GetSubroutineIndex;
	PROC_glGetSubroutineUniformLocation GetSubroutineUniformLocation;
	PROC_glGetSynciv GetSynciv;
	PROC_glGetTexImage GetTexImage;
	PROC_glGetTexLevelParameterfv GetTexLevelParameterfv;
	PROC_glGetTexLevelParameteriv GetTexLevelParameteriv;
	PROC_glGetTexParameterIiv GetTexParameterIiv;
	PROC_glGetTexParameterIuiv GetTexParameterIuiv;
	PROC_glGetTexParameterfv GetTexParameterfv;
	PROC_glGetTexParameteriv GetTexParameteriv;
	PROC_glGetTextureImage GetTextureImage;
	PROC_glGetTextureLevelParameterfv GetTextureLevelParameterfv;
	PROC_glGetTextureLevelParameteriv GetTextureLevelParameteriv;
	PROC_glGetTextureParameterIiv GetTextureParameterIiv;
	PROC_glGetTextureParameterIuiv GetTextureParameterIuiv;
	PROC_glGetTextureParameterfv GetTextureParameterfv;
	PROC_glGetTextureParameteriv GetTextureParameteriv;
	PROC_glGetTextureSubImage GetTextureSubImage;
	PROC_glGetTransformFeedbackVarying GetTransformFeedbackVarying;
	PROC_glGetTransformFeedbacki64_v GetTransformFeedbacki64_v;
	PROC_glGetTransformFeedbacki_v GetTransformFeedbacki_v;
	PROC_glGetTransformFeedbackiv GetTransformFeedbackiv;
	PROC_glGetUniformBlockIndex GetUniformBlockIndex;
	PROC_glGetUniformIndices GetUniformIndices;
	PROC_glGetUniformLocation GetUniformLocation;
	PROC_glGetUniformSubroutineuiv GetUniformSubroutineuiv;
	PROC_glGetUniformdv GetUniformdv;
	PROC_glGetUniformfv GetUniformfv;
	PROC_glGetUniformiv GetUniformiv;
	PROC_glGetUniformuiv GetUniformuiv;
	PROC_glGetVertexArrayIndexed64iv GetVertexArrayIndexed64iv;
	PROC_glGetVertexArrayIndexediv GetVertexArrayIndexediv;
	PROC_glGetVertexArrayiv GetVertexArrayiv;
	PROC_glGetVertexAttribIiv GetVertexAttribIiv;
	PROC_glGetVertexAttribIuiv GetVertexAttribIuiv;
	PROC_glGetVertexAttribLdv GetVertexAttribLdv;
	PROC_glGetVertexAttribPointerv GetVertexAttribPointerv;
	PROC_glGetVertexAttribdv GetVertexAttribdv;
	PROC_glGetVertexAttribfv GetVertexAttribfv;
	PROC_glGetVertexAttribiv GetVertexAttribiv;
	PROC_glGetnCompressedTexImage GetnCompressedTexImage;
	PROC_glGetnTexImage GetnTexImage;
	PROC_glGetnUniformdv GetnUniformdv;
	PROC_glGetnUniformfv GetnUniformfv;
	PROC_glGetnUniformiv GetnUniformiv;
	PROC_glGetnUniformuiv GetnUniformuiv;
	PROC_glHint Hint;
	PROC_glInvalidateBufferData InvalidateBufferData;
	PROC_glInvalidateBufferSubData InvalidateBufferSubData;
	PROC_glInvalidateFramebuffer InvalidateFramebuffer;
	PROC_glInvalidateNamedFramebufferData InvalidateNamedFramebufferData;
	PROC_glInvalidateNamedFramebufferSubData InvalidateNamedFramebufferSubData;
	PROC_glInvalidateSubFramebuffer InvalidateSubFramebuffer;
	PROC_glInvalidateTexImage InvalidateTexImage;
	PROC_glInvalidateTexSubImage InvalidateTexSubImage;
	PROC_glIsBuffer IsBuffer;
	PROC_glIsEnabled IsEnabled;
	PROC_glIsEnabledi IsEnabledi;
	PROC_glIsFramebuffer IsFramebuffer;
	PROC_glIsProgram IsProgram;
	PROC_glIsProgramPipeline IsProgramPipeline;
	PROC_glIsQuery IsQuery;
	PROC_glIsRenderbuffer IsRenderbuffer;
	PROC_glIsSampler IsSampler;
	PROC_glIsShader IsShader;
	PROC_glIsSync IsSync;
	PROC_glIsTexture IsTexture;
	PROC_glIsTransformFeedback IsTransformFeedback;
	PROC_glIsVertexArray IsVertexArray;
	PROC_glLineWidth LineWidth;
	PROC_glLinkProgram LinkProgram;
	PROC_glLogicOp LogicOp;
	PROC_glMapBuffer MapBuffer;
	PROC_glMapBufferRange MapBufferRange;
	PROC_glMapNamedBuffer MapNamedBuffer;
	PROC_glMapNamedBufferRange MapNamedBufferRange;
	PROC_glMemoryBarrier MemoryBarrier;
	PROC_glMemoryBarrierByRegion MemoryBarrierByRegion;
	PROC_glMinSampleShading MinSampleShading;
	PROC_glMultiDrawArrays MultiDrawArrays;
	PROC_glMultiDrawArraysIndirect MultiDrawArraysIndirect;
	PROC_glMultiDrawElements MultiDrawElements;
	PROC_glMultiDrawElementsBaseVertex MultiDrawElementsBaseVertex;
	PROC_glMultiDrawElementsIndirect MultiDrawElementsIndirect;
	PROC_glNamedBufferData NamedBufferData;
	PROC_glNamedBufferStorage NamedBufferStorage;
	PROC_glNamedBufferSubData NamedBufferSubData;
	PROC_glNamedFramebufferDrawBuffer NamedFramebufferDrawBuffer;
	PROC_glNamedFramebufferDrawBuffers NamedFramebufferDrawBuffers;
	PROC_glNamedFramebufferParameteri NamedFramebufferParameteri;
	PROC_glNamedFramebufferReadBuffer NamedFramebufferReadBuffer;
	PROC_glNamedFramebufferRenderbuffer NamedFramebufferRenderbuffer;
	PROC_glNamedFramebufferTexture NamedFramebufferTexture;
	PROC_glNamedFramebufferTextureLayer NamedFramebufferTextureLayer;
	PROC_glNamedRenderbufferStorage NamedRenderbufferStorage;
	PROC_glNamedRenderbufferStorageMultisample NamedRenderbufferStorageMultisample;
	PROC_glObjectLabel ObjectLabel;
	PROC_glObjectPtrLabel ObjectPtrLabel;
	PROC_glPatchParameterfv PatchParameterfv;
	PROC_glPatchParameteri PatchParameteri;
	PROC_glPauseTransformFeedback PauseTransformFeedback;
	PROC_glPixelStoref PixelStoref;
	PROC_glPixelStorei PixelStorei;
	PROC_glPointParameterf PointParameterf;
	PROC_glPointParameterfv PointParameterfv;
	PROC_glPointParameteri PointParameteri;
	PROC_glPointParameteriv PointParameteriv;
	PROC_glPointSize PointSize;
	PROC_glPolygonMode PolygonMode;
	PROC_glPolygonOffset PolygonOffset;
	PROC_glPopDebugGroup PopDebugGroup;
	PROC_glPrimitiveRestartIndex PrimitiveRestartIndex;
	PROC_glProgramBinary ProgramBinary;
	PROC_glProgramParameteri ProgramParameteri;
	PROC_glProgramUniform1d ProgramUniform1d;
	PROC_glProgramUniform1dv ProgramUniform1dv;
	PROC_glProgramUniform1f ProgramUniform1f;
	PROC_glProgramUniform1fv ProgramUniform1fv;
	PROC_glProgramUniform1i ProgramUniform1i;
	PROC_glProgramUniform1iv ProgramUniform1iv;
	PROC_glProgramUniform1ui ProgramUniform1ui;
	PROC_glProgramUniform1uiv ProgramUniform1uiv;
	PROC_glProgramUniform2d ProgramUniform2d;
	PROC_glProgramUniform2dv ProgramUniform2dv;
	PROC_glProgramUniform2f ProgramUniform2f;
	PROC_glProgramUniform2fv ProgramUniform2fv;
	PROC_glProgramUniform2i ProgramUniform2i;
	PROC_glProgramUniform2iv ProgramUniform2iv;
	PROC_glProgramUniform2ui ProgramUniform2ui;
	PROC_glProgramUniform2uiv ProgramUniform2uiv;
	PROC_glProgramUniform3d ProgramUniform3d;
	PROC_glProgramUniform3dv ProgramUniform3dv;
	PROC_glProgramUniform3f ProgramUniform3f;
	PROC_glProgramUniform3fv ProgramUniform3fv;
	PROC_glProgramUniform3i ProgramUniform3i;
	PROC_glProgramUniform3iv ProgramUniform3iv;
	PROC_glProgramUniform3ui ProgramUniform3ui;
	PROC_glProgramUniform3uiv ProgramUniform3uiv;
	PROC_glProgramUniform4d ProgramUniform4d;
	PROC_glProgramUniform4dv ProgramUniform4dv;
	PROC_glProgramUniform4f ProgramUniform4f;
	PROC_glProgramUniform4fv ProgramUniform4fv;
	PROC_glProgramUniform4i ProgramUniform4i;
	PROC_glProgramUniform4iv ProgramUniform4iv;
	PROC_glProgramUniform4ui ProgramUniform4ui;
	PROC_glProgramUniform4uiv ProgramUniform4uiv;
	PROC_glProgramUniformMatrix2dv ProgramUniformMatrix2dv;
	PROC_glProgramUniformMatrix2fv ProgramUniformMatrix2fv;
	PROC_glProgramUniformMatrix2x3dv ProgramUniformMatrix2x3dv;
	PROC_glProgramUniformMatrix2x3fv ProgramUniformMatrix2x3fv;
	PROC_glProgramUniformMatrix2x4dv ProgramUniformMatrix2x4dv;
	PROC_glProgramUniformMatrix2x4fv ProgramUniformMatrix2x4fv;
	PROC_glProgramUniformMatrix3dv ProgramUniformMatrix3dv;
	PROC_glProgramUniformMatrix3fv ProgramUniformMatrix3fv;
	PROC_glProgramUniformMatrix3x2dv ProgramUniformMatrix3x2dv;
	PROC_glProgramUniformMatrix3x2fv ProgramUniformMatrix3x2fv;
	PROC_glProgramUniformMatrix3x4dv ProgramUniformMatrix3x4dv;
	PROC_glProgramUniformMatrix3x4fv ProgramUniformMatrix3x4fv;
	PROC_glProgramUniformMatrix4dv ProgramUniformMatrix4dv;
	PROC_glProgramUniformMatrix4fv ProgramUniformMatrix4fv;
	PROC_glProgramUniformMatrix4x2dv ProgramUniformMatrix4x2dv;
	PROC_glProgramUniformMatrix4x2fv ProgramUniformMatrix4x2fv;
	PROC_glProgramUniformMatrix4x3dv ProgramUniformMatrix4x3dv;
	PROC_glProgramUniformMatrix4x3fv ProgramUniformMatrix4x3fv;
	PROC_glProvokingVertex ProvokingVertex;
	PROC_glPushDebugGroup PushDebugGroup;
	PROC_glQueryCounter QueryCounter;
	PROC_glReadBuffer ReadBuffer;
	PROC_glReadPixels ReadPixels;
	PROC_glReadnPixels ReadnPixels;
	PROC_glReleaseShaderCompiler ReleaseShaderCompiler;
	PROC_glRenderbufferStorage RenderbufferStorage;
	PROC_glRenderbufferStorageMultisample RenderbufferStorageMultisample;
	PROC_glResumeTransformFeedback ResumeTransformFeedback;
	PROC_glSampleCoverage SampleCoverage;
	PROC_glSampleMaski SampleMaski;
	PROC_glSamplerParameterIiv SamplerParameterIiv;
	PROC_glSamplerParameterIuiv SamplerParameterIuiv;
	PROC_glSamplerParameterf SamplerParameterf;
	PROC_glSamplerParameterfv SamplerParameterfv;
	PROC_glSamplerParameteri SamplerParameteri;
	PROC_glSamplerParameteriv SamplerParameteriv;
	PROC_glScissor Scissor;
	PROC_glScissorArrayv ScissorArrayv;
	PROC_glScissorIndexed ScissorIndexed;
	PROC_glScissorIndexedv ScissorIndexedv;
	PROC_glShaderBinary ShaderBinary;
	PROC_glShaderSource ShaderSource;
	PROC_glShaderStorageBlockBinding ShaderStorageBlockBinding;
	PROC_glStencilFunc StencilFunc;
	PROC_glStencilFuncSeparate StencilFuncSeparate;
	PROC_glStencilMask StencilMask;
	PROC_glStencilMaskSeparate StencilMaskSeparate;
	PROC_glStencilOp StencilOp;
	PROC_glStencilOpSeparate StencilOpSeparate;
	PROC_glTexBuffer TexBuffer;
	PROC_glTexBufferRange TexBufferRange;
	PROC_glTexImage1D TexImage1D;
	PROC_glTexImage2D TexImage2D;
	PROC_glTexImage2DMultisample TexImage2DMultisample;
	PROC_glTexImage3D TexImage3D;
	PROC_glTexImage3DMultisample TexImage3DMultisample;
	PROC_glTexParameterIiv TexParameterIiv;
	PROC_glTexParameterIuiv TexParameterIuiv;
	PROC_glTexParameterf TexParameterf;
	PROC_glTexParameterfv TexParameterfv;
	PROC_glTexParameteri TexParameteri;
	PROC_glTexParameteriv TexParameteriv;
	PROC_glTexStorage1D TexStorage1D;
	PROC_glTexStorage2D TexStorage2D;
	PROC_glTexStorage2DMultisample TexStorage2DMultisample;
	PROC_glTexStorage3D TexStorage3D;
	PROC_glTexStorage3DMultisample TexStorage3DMultisample;
	PROC_glTexSubImage1D TexSubImage1D;
	PROC_glTexSubImage2D TexSubImage2D;
	PROC_glTexSubImage3D TexSubImage3D;
	PROC_glTextureBarrier TextureBarrier;
	PROC_glTextureBuffer TextureBuffer;
	PROC_glTextureBufferRange TextureBufferRange;
	PROC_glTextureParameterIiv TextureParameterIiv;
	PROC_glTextureParameterIuiv TextureParameterIuiv;
	PROC_glTextureParameterf TextureParameterf;
	PROC_glTextureParameterfv TextureParameterfv;
	PROC_glTextureParameteri TextureParameteri;
	PROC_glTextureParameteriv TextureParameteriv;
	PROC_glTextureStorage1D TextureStorage1D;
	PROC_glTextureStorage2D TextureStorage2D;
	PROC_glTextureStorage2DMultisample TextureStorage2DMultisample;
	PROC_glTextureStorage3D TextureStorage3D;
	PROC_glTextureStorage3DMultisample TextureStorage3DMultisample;
	PROC_glTextureSubImage1D TextureSubImage1D;
	PROC_glTextureSubImage2D TextureSubImage2D;
	PROC_glTextureSubImage3D TextureSubImage3D;
	PROC_glTextureView TextureView;
	PROC_glTransformFeedbackBufferBase TransformFeedbackBufferBase;
	PROC_glTransformFeedbackBufferRange TransformFeedbackBufferRange;
	PROC_glTransformFeedbackVaryings TransformFeedbackVaryings;
	PROC_glUniform1d Uniform1d;
	PROC_glUniform1dv Uniform1dv;
	PROC_glUniform1f Uniform1f;
	PROC_glUniform1fv Uniform1fv;
	PROC_glUniform1i Uniform1i;
	PROC_glUniform1iv Uniform1iv;
	PROC_glUniform1ui Uniform1ui;
	PROC_glUniform1uiv Uniform1uiv;
	PROC_glUniform2d Uniform2d;
	PROC_glUniform2dv Uniform2dv;
	PROC_glUniform2f Uniform2f;
	PROC_glUniform2fv Uniform2fv;
	PROC_glUniform2i Uniform2i;
	PROC_glUniform2iv Uniform2iv;
	PROC_glUniform2ui Uniform2ui;
	PROC_glUniform2uiv Uniform2uiv;
	PROC_glUniform3d Uniform3d;
	PROC_glUniform3dv Uniform3dv;
	PROC_glUniform3f Uniform3f;
	PROC_glUniform3fv Uniform3fv;
	PROC_glUniform3i Uniform3i;
	PROC_glUniform3iv Uniform3iv;
	PROC_glUniform3ui Uniform3ui;
	PROC_glUniform3uiv Uniform3uiv;
	PROC_glUniform4d Uniform4d;
	PROC_glUniform4dv Uniform4dv;
	PROC_glUniform4f Uniform4f;
	PROC_glUniform4fv Uniform4fv;
	PROC_glUniform4i Uniform4i;
	PROC_glUniform4iv Uniform4iv;
	PROC_glUniform4ui Uniform4ui;
	PROC_glUniform4uiv Uniform4uiv;
	PROC_glUniformBlockBinding UniformBlockBinding;
	PROC_glUniformMatrix2dv UniformMatrix2dv;
	PROC_glUniformMatrix2fv UniformMatrix2fv;
	PROC_glUniformMatrix2x3dv UniformMatrix2x3dv;
	PROC_glUniformMatrix2x3fv UniformMatrix2x3fv;
	PROC_glUniformMatrix2x4dv UniformMatrix2x4dv;
	PROC_glUniformMatrix2x4fv UniformMatrix2x4fv;
	PROC_glUniformMatrix3dv UniformMatrix3dv;
	PROC_glUniformMatrix3fv UniformMatrix3fv;
	PROC_glUniformMatrix3x2dv UniformMatrix3x2dv;
	PROC_glUniformMatrix3x2fv UniformMatrix3x2fv;
	PROC_glUniformMatrix3x4dv UniformMatrix3x4dv;
	PROC_glUniformMatrix3x4fv UniformMatrix3x4fv;
	PROC_glUniformMatrix4dv UniformMatrix4dv;
	PROC_glUniformMatrix4fv UniformMatrix4fv;
	PROC_glUniformMatrix4x2dv UniformMatrix4x2dv;
	PROC_glUniformMatrix4x2fv UniformMatrix4x2fv;
	PROC_glUniformMatrix4x3dv UniformMatrix4x3dv;
	PROC_glUniformMatrix4x3fv UniformMatrix4x3fv;
	PROC_glUniformSubroutinesuiv UniformSubroutinesuiv;
	PROC_glUnmapBuffer UnmapBuffer;
	PROC_glUnmapNamedBuffer UnmapNamedBuffer;
	PROC_glUseProgram UseProgram;
	PROC_glUseProgramStages UseProgramStages;
	PROC_glValidateProgram ValidateProgram;
	PROC_glValidateProgramPipeline ValidateProgramPipeline;
	PROC_glVertexArrayAttribBinding VertexArrayAttribBinding;
	PROC_glVertexArrayAttribFormat VertexArrayAttribFormat;
	PROC_glVertexArrayAttribIFormat VertexArrayAttribIFormat;
	PROC_glVertexArrayAttribLFormat VertexArrayAttribLFormat;
	PROC_glVertexArrayBindingDivisor VertexArrayBindingDivisor;
	PROC_glVertexArrayElementBuffer VertexArrayElementBuffer;
	PROC_glVertexArrayVertexBuffer VertexArrayVertexBuffer;
	PROC_glVertexArrayVertexBuffers VertexArrayVertexBuffers;
	PROC_glVertexAttrib1d VertexAttrib1d;
	PROC_glVertexAttrib1dv VertexAttrib1dv;
	PROC_glVertexAttrib1f VertexAttrib1f;
	PROC_glVertexAttrib1fv VertexAttrib1fv;
	PROC_glVertexAttrib1s VertexAttrib1s;
	PROC_glVertexAttrib1sv VertexAttrib1sv;
	PROC_glVertexAttrib2d VertexAttrib2d;
	PROC_glVertexAttrib2dv VertexAttrib2dv;
	PROC_glVertexAttrib2f VertexAttrib2f;
	PROC_glVertexAttrib2fv VertexAttrib2fv;
	PROC_glVertexAttrib2s VertexAttrib2s;
	PROC_glVertexAttrib2sv VertexAttrib2sv;
	PROC_glVertexAttrib3d VertexAttrib3d;
	PROC_glVertexAttrib3dv VertexAttrib3dv;
	PROC_glVertexAttrib3f VertexAttrib3f;
	PROC_glVertexAttrib3fv VertexAttrib3fv;
	PROC_glVertexAttrib3s VertexAttrib3s;
	PROC_glVertexAttrib3sv VertexAttrib3sv;
	PROC_glVertexAttrib4Nbv VertexAttrib4Nbv;
	PROC_glVertexAttrib4Niv VertexAttrib4Niv;
	PROC_glVertexAttrib4Nsv VertexAttrib4Nsv;
	PROC_glVertexAttrib4Nub VertexAttrib4Nub;
	PROC_glVertexAttrib4Nubv VertexAttrib4Nubv;
	PROC_glVertexAttrib4Nuiv VertexAttrib4Nuiv;
	PROC_glVertexAttrib4Nusv VertexAttrib4Nusv;
	PROC_glVertexAttrib4bv VertexAttrib4bv;
	PROC_glVertexAttrib4d VertexAttrib4d;
	PROC_glVertexAttrib4dv VertexAttrib4dv;
	PROC_glVertexAttrib4f VertexAttrib4f;
	PROC_glVertexAttrib4fv VertexAttrib4fv;
	PROC_glVertexAttrib4iv VertexAttrib4iv;
	PROC_glVertexAttrib4s VertexAttrib4s;
	PROC_glVertexAttrib4sv VertexAttrib4sv;
	PROC_glVertexAttrib4ubv VertexAttrib4ubv;
	PROC_glVertexAttrib4uiv VertexAttrib4uiv;
	PROC_glVertexAttrib4usv VertexAttrib4usv;
	PROC_glVertexAttribBinding VertexAttribBinding;
	PROC_glVertexAttribDivisor VertexAttribDivisor;
	PROC_glVertexAttribFormat VertexAttribFormat;
	PROC_glVertexAttribI1i VertexAttribI1i;
	PROC_glVertexAttribI1iv VertexAttribI1iv;
	PROC_glVertexAttribI1ui VertexAttribI1ui;
	PROC_glVertexAttribI1uiv VertexAttribI1uiv;
	PROC_glVertexAttribI2i VertexAttribI2i;
	PROC_glVertexAttribI2iv VertexAttribI2iv;
	PROC_glVertexAttribI2ui VertexAttribI2ui;
	PROC_glVertexAttribI2uiv VertexAttribI2uiv;
	PROC_glVertexAttribI3i VertexAttribI3i;
	PROC_glVertexAttribI3iv VertexAttribI3iv;
	PROC_glVertexAttribI3ui VertexAttribI3ui;
	PROC_glVertexAttribI3uiv VertexAttribI3uiv;
	PROC_glVertexAttribI4bv VertexAttribI4bv;
	PROC_glVertexAttribI4i VertexAttribI4i;
	PROC_glVertexAttribI4iv VertexAttribI4iv;
	PROC_glVertexAttribI4sv VertexAttribI4sv;
	PROC_glVertexAttribI4ubv VertexAttribI4ubv;
	PROC_glVertexAttribI4ui VertexAttribI4ui;
	PROC_glVertexAttribI4uiv VertexAttribI4uiv;
	PROC_glVertexAttribI4usv VertexAttribI4usv;
	PROC_glVertexAttribIFormat VertexAttribIFormat;
	PROC_glVertexAttribIPointer VertexAttribIPointer;
	PROC_glVertexAttribL1d VertexAttribL1d;
	PROC_glVertexAttribL1dv VertexAttribL1dv;
	PROC_glVertexAttribL2d VertexAttribL2d;
	PROC_glVertexAttribL2dv VertexAttribL2dv;
	PROC_glVertexAttribL3d VertexAttribL3d;
	PROC_glVertexAttribL3dv VertexAttribL3dv;
	PROC_glVertexAttribL4d VertexAttribL4d;
	PROC_glVertexAttribL4dv VertexAttribL4dv;
	PROC_glVertexAttribLFormat VertexAttribLFormat;
	PROC_glVertexAttribLPointer VertexAttribLPointer;
	PROC_glVertexAttribP1ui VertexAttribP1ui;
	PROC_glVertexAttribP1uiv VertexAttribP1uiv;
	PROC_glVertexAttribP2ui VertexAttribP2ui;
	PROC_glVertexAttribP2uiv VertexAttribP2uiv;
	PROC_glVertexAttribP3ui VertexAttribP3ui;
	PROC_glVertexAttribP3uiv VertexAttribP3uiv;
	PROC_glVertexAttribP4ui VertexAttribP4ui;
	PROC_glVertexAttribP4uiv VertexAttribP4uiv;
	PROC_glVertexAttribPointer VertexAttribPointer;
	PROC_glVertexBindingDivisor VertexBindingDivisor;
	PROC_glViewport Viewport;
	PROC_glViewportArrayv ViewportArrayv;
	PROC_glViewportIndexedf ViewportIndexedf;
	PROC_glViewportIndexedfv ViewportIndexedfv;

	bool load_old();

private:
	GLMethods(const GLMethods & copy);
	void operator = (const GLMethods & rhs);
};
