#include <iostream>

using namespace std;

int argent(int tab[])
{
    if (tab[0] == '\0')
    {
        return 1;
    }

    int min;
    for (int i = 1; i <= 10; i++)
    {
        min = i;
        cout << "min : "<<min << endl;
        int j=0;
        while(tab[j]!='\0' && min != 0)
        {
            cout << "j : "<< tab[j] << endl;
            if(tab[j] == i) {
                min -=tab[j];
            }
            if (tab[j] == '\0' && min > 0)
            {
                return min;
            }
            if (min > tab[j])
            {
                min -= tab[j];
            }
            j++;
        }
    }
    return min;
}

int main()
{

    int pieces [] =  {1,2,5,'\0'};
    cout << argent(pieces) << endl;
}