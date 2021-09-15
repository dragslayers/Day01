#include <iostream>
#include <string>

using namespace std;

string cesar(string msg, int cle)
{
    int i = 0;
    string crypter;
    while (msg[i] != '\0')
    {
        crypter += (int)msg[i] + cle;
        i++;
    }
    return crypter;
}

int main()
{
    cout << cesar("abc", 1) << endl;
}