#pragma once

#include <iostream>
#include <fstream>
#include <filesystem>

#ifndef OboSoft_FileManager
#define OboSoft_FileManager

namespace OboSoft 
{
	namespace fs = std::filesystem;

	bool CreateFile(std::string path, 
		std::string fileName);

	bool CreateFile(std::string path, 
		std::string fileName, std::string extension);

	bool DeleteFile(std::string filePath);

	bool FileExists(std::string filePath);

	uintmax_t GetFileSize(std::string filePath);
}

#endif

