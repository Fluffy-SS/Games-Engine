#pragma once
#include <GL\glew.h>

struct Position {
	float x, y;
};

//4 bytes for RGBA color
struct Color {
	GLubyte r, g, b, a;
};

struct Vertex {
	Position position; 

	Color color;

};
