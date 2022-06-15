#include "include.h"
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
    for(auto x : f.place){}
    while (true)
    {
    system("cls");
    memorise(f);
    }
}