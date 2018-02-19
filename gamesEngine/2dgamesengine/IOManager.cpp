#include "IOManager.h"

#include<fstream>
namespace gamesengine2d {
	bool IOManager::readFileToBuffer(std::string filePath, std::vector<unsigned char>& buffer) {
		std::ifstream file(filePath, std::ios::binary);
		if (file.fail()) {
			perror(filePath.c_str());
			return false;
		}

		//Check the actual size of the file
		//seek to the end
		file.seekg(0, std::ios::end);

		//Get the file size
		int fileSize = file.tellg();

		//seek back to the beginning
		file.seekg(0, std::ios::beg);

		//reduce file size by any header bites that might be present
		fileSize -= file.tellg();

		buffer.resize(fileSize);

		file.read((char *)&(buffer[0]), fileSize);
		file.close();

		return true;
	}
}