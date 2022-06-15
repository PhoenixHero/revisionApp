#include "file.h"
#include <fstream>

std::string ln, temp;
void file::in(std::string file)
{
    std::ifstream files(file);
    while ( getline (files,ln) )
    {
    temp = ln;
    //Printing the output of the file contents
    temp.erase(temp.find_first_of(':'), temp.size());
    ln.erase(0, ln.find_first_of(':')+1);
    file::list[temp] = ln;
    }
    files.close();
}