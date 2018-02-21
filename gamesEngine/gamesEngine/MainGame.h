#pragma once

#include <SDL\SDL.h>
#include <GL\glew.h>
#include <2dgamesengine\2dgamesengine.h>
#include <2dgamesengine\GLSLProgram.h>
#include <2dgamesengine\Camera2D.h>
#include <2dgamesengine\Sprite.h>

#include <2dgamesengine\GLTexture.h>

#include <2dgamesengine\Window.h>

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
		
	gamesengine2d::Window _window;
	int _screenWidth, _screenHeight;
	GameState _gameState;

	std::vector<gamesengine2d::Sprite*> _sprites;

	gamesengine2d::GLSLProgram _colorProgram;
	gamesengine2d::Camera2D _camera;

	float _fps, _frameTime, _maxFPS;

	float _time;
	

};

