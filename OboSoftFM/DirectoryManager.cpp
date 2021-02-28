#include "DirectoryManager.h"

bool OboSoft::CreateDirectory(std::string path, std::string directoryName)
{
	if (fs::create_directory(path + directoryName))
		return true;
	else
	{
		std::cout << "Error encountered while creating the directory";
		return false;
	}
}

bool OboSoft::DeleteDirectory(std::string directoryPath)
{
	if (fs::remove(directoryPath))
		return true;
	else
	{
		std::cout << "Error encountered while " << 
			"deleting the directory";
		return false;
	}
}

bool OboSoft::DirectoryExists(std::string directoryPath)
{
	return fs::exists(directoryPath);
}

std::vector<std::string> OboSoft::DirectoryListFiles(
	std::string directoryPath)
{
	std::vector<std::string> files;
	for (const auto& entry : fs::directory_iterator(directoryPath))
	{
		files.push_back(entry.path().string());
	}
	return files;
}

bool OboSoft::IsEmpty(std::string directoryPath)
{
	return fs::is_empty(directoryPath);
}

