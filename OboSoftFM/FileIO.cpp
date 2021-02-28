#include "FileIO.h"

bool OboSoft::writeToFile(std::string filePath, 
    std::string &content)
{
    std::ofstream file(filePath);
    if (file.is_open())
    {
        file << content;
    }
    else
    {
        std::cout << "There was an error while writing to the file.";
        return false;
    }
    std::cout << "File written successfully!";
    return true;
    
}

std::string OboSoft::readFromFile(std::string filePath)
{
    std::string line;
    std::string text = "";
    std::ifstream file(filePath);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            text += line + "\n";
        }
    }
    return text;
}
