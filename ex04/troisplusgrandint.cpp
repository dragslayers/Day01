#include <iostream>
#include <array>

using namespace std;

int tablen(int tab[])
{
    int i = 0;
    while (tab[i] != '\0')
    {
        i++;
    }
    return i+1;
}

int trie(int tab[]) {

    int temp;
    for(int i=0;i<tablen(tab);i++) {
        if(tab[i] > tab[i+1] && i<=tablen(tab)) {
            temp = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = temp;
        }
    }

    return *tab;
}

int *biggestint(int tab[]) {
    static int tab2[3];
    int max2=tablen(tab)-1;
    for(int i=0;i<tablen(tab);i++) {
        if(tab[i] < tab[i+1]) {
            trie(tab);
        }
    }
    for(int i=2;i>=0;i--) {
        tab2[i] = tab[max2];
        max2--;
    }
    return tab2;
}

int main() {
    int tab[] = {141, -8, 78, 12, 1, 32, '\0'};
    int *p;
    p = biggestint(tab);
    for ( int i = 0; i < 3; i++ ) {
      cout << *(p + i) << endl;
    }
}