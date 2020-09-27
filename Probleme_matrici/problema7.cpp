/*
    -se initializeaza o matrice cu 4 linii si 3 coloane
    -i = 0 si j = 0 => a[0][0] = i => 0;
    -Procesul se repeta de n * m ori adica de 12 ori;
    -Toate elementele de la a[i][0] pana la a[i][2] vor fi egale cu i.
*/

#include <iostream>
using namespace std;

int main() {
    int a[4][3];
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 3; ++j) {
            a[i][j] = i;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
} 