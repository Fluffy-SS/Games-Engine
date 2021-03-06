#include "Camera2D.h"


namespace gamesengine2d {
	Camera2D::Camera2D() : _screenWidth(500), _screenHeight(500), _needsMatrixUpdate(1),
		_scale(1.0f), _position(0.0f, 0.0f), _cameraMatrix(1.0f), _orthoMatrix(1.0f)
	{}


	Camera2D::~Camera2D()
	{
	}

	void Camera2D::init(int screenWidth, int screenHeight) {
		_screenWidth = screenWidth;
		_screenHeight = screenHeight;
		_orthoMatrix = glm::ortho(0.0f, (float)screenWidth, 0.0f, (float)screenHeight);
	}

	void Camera2D::update() {

		if (_needsMatrixUpdate) {
			//Camers Translation
			glm::vec3 translate(-_position.x + _screenWidth / 2, -_position.y + _screenHeight / 2, 0.0f);
			_cameraMatrix = glm::translate(_orthoMatrix, translate);

			//Camera Scale
			glm::vec3 scale(_scale, _scale, 0.0f);
			_cameraMatrix = glm::scale(glm::mat4 (1.0f), scale) * _cameraMatrix;
			_needsMatrixUpdate = false;
		}
	}
}
