#pragma once
#include<map>
#include"GLTexture.h"
namespace gamesengine2d {
class TextureCache
{
public:
	TextureCache();
	~TextureCache();

	GLTexture getTexture(std::string texturePath);

private:
	std::map<std::string, GLTexture> _textureMap;
};
}

