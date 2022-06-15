#ifndef fileh
#define fileh
#include <iostream>
#include <string>
#include <map>

class file{
public:
    std::map<std::string, std::string> list;
    std::map<std::string, int> prog;
    std::map<int, std::string> place;
    void in(std::string file);
};
#endif