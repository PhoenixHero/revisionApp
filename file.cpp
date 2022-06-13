#include "file.h"
#include <random>
#include <time.h>
#include <fstream>

std::string ln, temp;
void file::in(std::string file)
{
    std::ifstream files(file);
    while ( getline (files,ln) )
    {
    temp = ln;
    //Printing the output of the file contents
    temp.erase(temp.find_first_of(' '), temp.size());
    ln.erase(0, ln.find_first_of(' ')+1);
    list[temp] = ln;
    }
    files.close();
    for(auto x: list)
    {
        int i;
        place[i] = x.first;
    }
}