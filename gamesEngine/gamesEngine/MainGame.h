#pragma once

#include <SDL\SDL.h>
#include <GL\glew.h>

class MainGame
{
public:
	MainGame();
	~MainGame();

	void run();

	void InitSystems();

private:
	SDL_Window* _window;
	int _screenWidth, _screenHeight;
	

};

