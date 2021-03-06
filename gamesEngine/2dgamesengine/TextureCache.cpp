#include "TextureCache.h"
#include "Errors.h"
#include "ImageLoader.h"
#include <iostream>
namespace gamesengine2d {

	TextureCache::TextureCache()
	{
	}


	TextureCache::~TextureCache()
	{
	}

	GLTexture TextureCache::getTexture(std::string texturePath) {

		//look up texture and see if it is in the map
		auto mit = _textureMap.find(texturePath);

		//check if its not in the map
		if (mit == _textureMap.end()) {
			//Load texture
			GLTexture newTexture = ImageLoader::loadPNG(texturePath);

			//Insert it into the map
			_textureMap.insert(make_pair(texturePath, newTexture));

			std::cout << "Loaded Texture!\n";
			return newTexture;
		}
		std::cout << "Used Cached Texture!\n";

		return mit->second;

	}
}
