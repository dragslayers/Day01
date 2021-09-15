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

int operation(string msg, string msg2)
{

    int len = chainelen(msg), len2 = chainelen(msg2);
    int nbop = 0;
    bool in;

    for (int i = 0; i < len2; i++)
    {
        int j = 0;
        in = false;
        while (in == false && j != len2)
        {
            if (msg2[i] == msg[j])
            {
                in = true;
            }
            j++;
        }

        if (in == false)
        {
            nbop++;
        }
    }

    return nbop;
}

int main()
{
    cout << operation("abc", "yabd");
}