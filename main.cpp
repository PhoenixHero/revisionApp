#include "file.h"

int main()
{
    srand(time(0));
    in("list.txt");
    for(auto x: list)
    {
        int i;
        prog[x.first] = 0;
        place[i] = x.first;
        i++;
    }
    std::string temp, in;
    while(true){
    temp = place[rand() % list.size()];
    std::cout << temp;
    std::cin >> in;
    if(in == list[temp])
    {
        std::cout << "correct!\n";
    }
    else
    {
        std::cout << "incorrect\n";
    }
    }
}