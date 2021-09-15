#include <iostream>
#include <string>

using namespace std;

int somme(int y, int z)
{
    int somme=0;
    for (y; y <= z; y++)
    {
        somme+=y;
    }
    return somme;
}

int main()
{

    cout << somme(1, 100);
}