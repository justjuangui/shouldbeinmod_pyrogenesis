#include "common/stage.h"

BEGIN_DRAW_TEXTURES
	TEXTURE_2D(0, baseTex)
END_DRAW_TEXTURES

BEGIN_DRAW_UNIFORMS
	UNIFORM(mat4, transform)
	UNIFORM(vec4, colorMul)
END_DRAW_UNIFORMS

VERTEX_OUTPUT(0, vec2, v_tex);
