#include "FileManager.h"

bool OboSoft::CreateFile(std::string path, 
	std::string fileName)
{
	std::ofstream file(path + fileName + ".txt");
	file.close();
}

bool OboSoft::CreateFile(std::string path, 
	std::string fileName, std::string extension)
{
	std::ofstream file(path + fileName + "." + extension);
	file.close();
}

bool OboSoft::DeleteFile(std::string filePath)
{
	if (fs::remove(filePath))
		return true;
	else
	{
		std::cout << "There was an error while removing the file";
		return false;
	}
}

bool OboSoft::FileExists(std::string filePath)
{
	return fs::exists(filePath);
}

uintmax_t OboSoft::GetFileSize(std::string filePath)
{
	return fs::file_size(filePath);
}
