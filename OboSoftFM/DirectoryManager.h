#pragma once

#include <filesystem>
#include <iostream>
#include <vector>

#ifndef OboSoft_DM
#define OboSoft_DM

namespace OboSoft {
	
	namespace fs = std::filesystem;

	bool CreateDirectory(std::string path,
		std::string directoryName);

	bool DeleteDirectory(std::string directoryPath);

	bool DirectoryExists(std::string directoryPath);

	std::vector<std::string> DirectoryListFiles(
		std::string directoryPath);

	bool IsEmpty(std::string directoryPath);
}

#endif
