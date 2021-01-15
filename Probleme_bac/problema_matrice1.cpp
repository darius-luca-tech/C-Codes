/*
Variabilele i și p sunt de tip întreg, iar variabila a memorează un tablou bidimensional cu 7 linii și 7
coloane, cu elemente numere întregi din intervalul [0,10 2 ].
Fără a utiliza alte variabile decât cele menționate, scrieți o secvență de
instrucțiuni astfel încât, în urma executării acesteia, să se afişeze, separate
prin câte un spațiu, produsul celor 7 elemente situate pe diagonala
principală a tabloului, urmat de produsul elementelor situate simultan pe
diagonala principală și pe primele 6 linii ale tabloului, şi aşa mai departe,
astfel încât ultimul număr afișat să fie elementul situat simultan pe
diagonala principală și pe prima linie a tabloului.
Exemplu: pentru tabloul alăturat se afișează 1680 840 420 84 21 7 1
*/

#include <iostream>
#include <fstream>
using namespace std;

fstream fin("bac.txt", ios::in);
fstream fout("out.txt", ios::out);

int main() {
    int a[8][8];
    int p = 1;
    for(int i = 1; i <= 7; i++) {
        for(int j = 1; j <= 7; j++) {
            fin>>a[i][j];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int i;

    for(int i = 1; i <= 7; i++) {
        p *= a[i][i];
    }

    for(int i = 7; i >= 1; --i) {
        cout<<p<<" ";
        p = p / a[i][i];
    }

    return 0;
}
