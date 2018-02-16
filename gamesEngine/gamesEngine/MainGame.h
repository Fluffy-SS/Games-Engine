#pragma once

#include <SDL\SDL.h>
#include <GL\glew.h>

#include "GLSLProgram.h"

#include "Sprite.h"

#include "GLTexture.h"

#include<vector>


enum class GameState {PLAY, EXIT};

class MainGame
{
public:
	MainGame();
	~MainGame();

	void run();

private:
	void initSystems();
	void initShaders();
	void gameLoop();
	void processInput();
	void drawGame();
	void calculateFPS();
		
	SDL_Window* _window;
	int _screenWidth, _screenHeight;
	GameState _gameState;

	std::vector<Sprite*> _sprites;

	GLSLProgram _colorProgram;

	float _fps, _frameTime, _maxFPS;

	float _time;
	

};

