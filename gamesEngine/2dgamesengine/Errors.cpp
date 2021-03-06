#include "Errors.h"
#include <cstdlib>
#include <iostream>
#include <SDL\SDL.h>
namespace gamesengine2d {
	//Prints out an error message and exists the game
	void fatalError(std::string errorString) {
		std::cout << errorString << std::endl;
		std::cout << "Enter any key to quit...";
		int tmp;
		std::cin >> tmp;
		SDL_QUIT;
		exit(1);
	}
}