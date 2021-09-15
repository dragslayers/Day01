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

    int len = chainelen(msg) - 1, len2 = chainelen(msg2) - 1;
    int nbop = 0;
    bool in;
    // cout << len <<endl;
    // cout << len2 <<endl;

    for (int i = 0; i < len2; i++)
    {
        int j = 0;
        in == false;
        while (in == false && j != len2)
        {
            if (msg2[i] == msg[j])
            {
                in == true;
                break;
            }
            j++;
        }

        if (in == false)
        {
            cout << "i"
                 << " : " << msg[i] << endl;
            cout << "j"
                 << " : " << msg2[j] << endl;
            nbop++;
        }
    }

    return nbop;
}

int main()
{

    cout << operation("abc", "yabd");
}