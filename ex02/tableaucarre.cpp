#include <iostream>
#include <math.h>

using namespace std;

int *square(int tab[]) {
    static int tab2[5];
    // cout << "t[i]" << "\t" << "t[i]^2" << "\t" << "t2[i]" << endl;
    for(int i=0;i<5;i++) {
        tab2[i]=tab[i]*tab[i];

        // tab2[i]=pow(tab[i],2);
        // cout << tab[i] << "\t";
        // cout << pow(tab[i],2) << "\t";
        // cout << tab2[i] << endl;

    }
    return tab2;
}

int main() {

    int tab[] = {3,4,5,7,8};
    int *p;
    p = square(tab);
    for ( int i = 0; i < 5; i++ ) {
      cout << *(p + i) << endl;
    }
    return 0;
}