#pragma once
#include <GL\glew.h>

struct Position {
	float x, y;
};

//4 bytes for RGBA color
struct Color {
	GLubyte r, g, b, a;
};

//UV texture coordinates
struct UV {
	float u, v;
};

struct Vertex {
	Position position; 

	Color color;

	UV uv;

	void setColor(GLubyte r, GLubyte g, GLubyte b, GLubyte a) {
		color.r = r;
		color.g = g;
		color.b = b;
		color.a = a;
	}

	void setUV(float u, float v) {
		uv.u = u;
		uv.v = v;
	}

	void setPosition(float x, float y) {
		position.x = x;
		position.y = y;
	}
};
