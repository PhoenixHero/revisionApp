#include <iostream>
#include <string>
#include <map>
#include <random>
#include <time.h>
#include <fstream>

std::map<std::string, std::string> list;
std::map<std::string, int> prog;
std::map<int, std::string> place;


std::string ln;
void in(std::string file)
{
    std::ifstream files(file);
    while ( getline (files,ln) )
    {
    //Printing the output of the file contents
    std::cout << ln << '\n';
    }
    files.close();
}