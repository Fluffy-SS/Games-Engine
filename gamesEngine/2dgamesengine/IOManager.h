#pragma once

#include <vector>
namespace gamesengine2d {
class IOManager
{
public:
	static bool readFileToBuffer(std::string filePath, std::vector<unsigned char>& buffer);
};
}

