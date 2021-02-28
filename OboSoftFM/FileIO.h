#pragma once

#include <string>
#include <fstream>
#include <iostream>

#ifndef OboSoft_FileIO
#define OboSoft_FileIO

namespace OboSoft 
{

	bool WriteToFile(std::string filePath, 
		std::string &content);

	std::string ReadFromFile(std::string filePath);

}

#endif