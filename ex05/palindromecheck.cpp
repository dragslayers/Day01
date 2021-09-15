#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int chainelen(string x)
{

    int len = 0, i = 0;
    while (x[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}

bool palindrome(string mot)
{
    int len = chainelen(mot);

    for (int i = 0; i <= (len / 2); i++)
    {
        cout << mot[i] << endl;
        cout << mot[len-1] << endl;
        if (mot[i] != mot[len-1])
        {
            return false;
        }
        len--;
    }

    return true;
}

int main()
{

    string mot = "kayak";
    cout << palindrome(mot) << endl;
    return 0;
}
