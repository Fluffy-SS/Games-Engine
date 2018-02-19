#include "ResourceManager.h"
namespace gamesengine2d {
	TextureCache ResourceManager::_textureCache;

	GLTexture ResourceManager::getTexture(std::string texturePath) {

		return _textureCache.getTexture(texturePath);
	}
}