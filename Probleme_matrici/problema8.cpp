
//    -se initializeaza o matrice de tip int cu 4 linii si 4 coloane
//    -i = 0 si j = 0:a[0][0] = 2 * i = 2 * 0 = 0;
//    -Procesul se va repeta de n * m ori , adica in cazul acestade 16 ori.
//    -Toate elementele de la a[i][0] pana la a[i][3] vor avea valoare de 2 * i.

#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            a[i][j] = 2 * i;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}