#include "include.h"

int memorise(file f)
{  
    std::string temp, in;
    int ran = rand() % f.list.size();
    temp = f.place[ran];
    if(f.prog[temp] >= 3)
        memorise(f);
    std::cout << temp << "\n";
    std::getline(std::cin, in);
    if(in == "stop")
        return 1;
    else if(in == f.list[temp])
    {
        std::cout << "correct!\n\n";
        f.prog[temp]++;
        std::cout << f.prog[temp];
        _sleep(500);
        return 0;
    }
    else
    {
        std::cout << "incorrect\ncorrect answer is : " << f.list[temp] << "\n\n";
        _sleep(3000);
        return 0;
    }
}