#ifndef fileh
#define fileh
#include <iostream>
#include <string>
#include <map>


std::map<std::string, std::string> list;
std::map<std::string, int> prog;
std::map<int, std::string> place;
class file{
public:
    void in(std::string file);
};
#endif