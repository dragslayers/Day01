#include <iostream>
#include <string>

using namespace std;

int chainelen(string x)
{

    int i = 0;
    while (x[i] != '\0')
    {
        i++;
    }
    return i;
}

int repeated(string msg)
{
    bool repeated;
    int i = 0, jamais = 0, len = chainelen(msg);
    int tab[len];
    while (msg[i] != '\0')
    {
        repeated = false;
        int j = i + 1;
        while (msg[j] != '\0' && repeated == false)
        {
            if (msg[i] == msg[j])
            {
                tab[i] = 1;
                tab[j] = 1;
                repeated = true;
            }
            j++;
        }

        if (repeated == false && tab[i] != 1)
        {
            tab[i] = 0;
            jamais++;
        }
        i++;
    }

    if (jamais == len)
    {
        return -1;
    }

    for (int i = 0; i < len; i++)
    {
        if (tab[i] == 0)
        {
            return i;
        }
    }
}

int main()
{
    string msg = "abcdcaf";
    cout << repeated(msg) << endl;
}