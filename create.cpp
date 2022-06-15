#include "include.h"

std::string name;
bool run = true;

void create()
{
    std::cout << "What is the list name";
    std::cin >> name;
    std::ofstream file(name);
    while(run)
    {
        int i;
        std::cout << "What is the " << i << " item (split it with a ':') ";
        std::getline(std::cin, name);
        if (name == "end")
            break;
        else
            file << name  << "\n";
        i++;
    }
}