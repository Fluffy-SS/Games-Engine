#include <SDL\SDL.h>
#include <GL\glew.h>

#include "2dgamesengine.h"
namespace gamesengine2d {
	int init() {
		//Initialise SDL
		SDL_Init(SDL_INIT_EVERYTHING);

		//Tell SDL that we want a double buffered window so we don't get any flickering
		SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
		return 0;
	}
}