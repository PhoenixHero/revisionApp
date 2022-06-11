#include "file.h"

#include <fstream>
#include <string>

std::string ln;
void in(std::string file)
{
    std::ofstream files(file);
    while(std::getline(files, ln))
    {
        std::cout << ln;
    }
    files.close();
}