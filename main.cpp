#include "include.h"
file f;
int a;
std::string in;

int main()
{
    std::cout << "What would you like to do? ";
    std::cin >> in;
    if(in == "m") {
        std::cout << "What is the list name?";
        std::cin >> in;
        in += ".list";
        while (a != 1)
        {
            f.in(in);
            for(auto x: f.list)
            {
                int i;
                f.prog[x.first] = 0;
                f.place[i] = x.first;
                i++;
            }
            for(auto x : f.place){}
            system("cls");
            a = memorise(f);
        }
    }
    else if(in == "c")
    {
        create();
    }
}