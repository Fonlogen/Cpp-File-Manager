#pragma once

#ifndef OboSoft_FileIO
#define OboSoft_FileIO

#include <string>
#include <fstream>
#include <iostream>

namespace OboSoft 
{

	bool writeToFile(std::string filePath, 
		std::string &content);

	std::string readFromFile(std::string filePath);

}

#endif