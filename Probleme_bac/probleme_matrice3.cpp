/*
Fără a utiliza alte variabile decât cele menționate, scrieți o secvență de instrucțiuni
prin care se transformă în memorie tabloul, astfel încât orice element aflat pe prima
linie sau pe ultima coloană să aibă valoarea 1 și oricare alt element din tablou să fie
egal cu ultima cifră a sumei celor două elemente alăturate lui, aflate pe aceeași linie dar
pe coloana din dreapta, respectiv pe aceeași coloană, dar pe linia anterioară.

*/

#include <iostream>
using namespace std;


int main() {
    int a[5][7];
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 7; ++j) {
            a[i][j] = 0;
        }
    }

    for(int i = 0; i < 5; ++i) {
        for(int j = 6; j >= 0; --j) {
            if(i == 0 or j == 6) {
                a[i][j] = 1;
            } else {
                a[i][j] = (a[i][j+1] + a[i-1][j]) % 10;
            }
        }
    }
      
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 7; ++j) { 
             cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
