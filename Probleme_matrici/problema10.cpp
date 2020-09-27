/*
    In algoritm, ne este prezentata instructiunea a[i][j] = i * m + j.
    Acesta afiseaza elementele de la 0 pana la n * m - 1.
    i = 0; j = 0 => a[0][0] = 0 * 4 + 0 = 0
    i = 0; j = 1 => a[0][1] = 0 * 4 + 1 = 1;
*/

#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            a[i][j] = i * 3 + j;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
    /*
    O: 0 1 2
       3 4 5 
       6 7 8
    */
}