#include <iostream>

using namespace std;

int search(int tab[], int cible) {
    for(int i=0;tab[i]!='\0';i++) {
        if(tab[i] == cible) {
            return i+1;
        }
    }
    return -1;
}

int main() {

    int tab[] = {1,2,5,6,9};
    cout << search(tab,54) << "\n";
    cout << search(tab,5) << "\n";
    return 0;
}