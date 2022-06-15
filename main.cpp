#include "file.h"
#include <random>
#include <time.h>
#include <string>

file f;

int main()
{
    srand(time(0));
    f.in("list.txt");
    for(auto x: f.list)
    {
        int i;
        f.prog[x.first] = 0;
        f.place[i] = x.first;
        i++;
    }
    for(auto x : f.place)
    {
        //std::cout << x.first << "\n";
    }
    std::string temp, in;
    while(true){   
    system("cls");
    int ran = rand() % f.list.size();
    temp = f.place[ran];
    std::cout << temp << "\n";
    std::getline(std::cin, in);
    if(in == "stop")
        break;
    else if(in == f.list[temp])
    {
        std::cout << "correct!\n\n";
        _sleep(500);
    }
    else
    {
        std::cout << "incorrect\ncorrect answer is : " << f.list[temp] << "\n\n";
        _sleep(3000);
    }
    }
}