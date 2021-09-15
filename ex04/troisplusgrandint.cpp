#include <iostream>
#include <array>
#define max 6

using namespace std;

int trie(int tab[]) {

    int temp;
    for(int i=0;i<max;i++) {
        if(tab[i] > tab[i+1] && i<=max) {
            temp = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = temp;
        }
    }

    return *tab;
}

int *biggestint(int tab[]) {
    static int tab2[3];
    int max2=5;
    for(int i=0;i<max;i++) {
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
    int tab[] = {141, -8, 78, 12, 1, 32};
    int *p;
    p = biggestint(tab);
    for ( int i = 0; i < 3; i++ ) {
      cout << *(p + i) << endl;
    }
}