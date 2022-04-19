/*
 Subprogramul inter are patru parametri:
• na, nb prin care primeşte câte un număr natural (0<na<100, 0<nb<100);
• a, b prin care primeşte câte un tablou unidimensional care memorează câte o mulŃime
de na, respectiv nb numere naturale, fiecare având cel mult patru cifre.
Subprogramul returnează numărul de elemente aparŃinând intersecŃiei celor două mulŃimi
menŃionate.
ScrieŃi în limbajul C/C++ definiŃia completă a subprogramului inter.
Exemplu: pentru na=4, a=(35,149,72,3798), nb=5, b=(72,151,149,9,623), în
urma apelului, subprogramul returnează valoarea 2.
*/
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

int inter(int na, int nb, int *a, int *b) {
    int counter = 0;
    for(int i = 0; i < na; ++i) {
        for(int j = 0; j < nb; ++j) {
            if(*(a + i) == *(b + j)) {
                counter++;
            }
            cout<<a[i]<<" "<<b[j]<<endl;
        }
    }

    return counter;
}

void matrice() {
    int a[5][5];

    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            a[i][j] = 2 * i + j + 1;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void tablou(int n, int k, int *a) {
    int aux = 1;

    for(int i = 1; i <= n * k; ++i) {
        a[i] = aux;
        if(i % k == 0) aux++;
    }

    for(int i = 1; i <= n * k; ++i) {
        cout<<a[i]<<" ";
    }
}

void sirNrPar() {
    ifstream fin("bac.txt");
    int aux, n;
    fin>>n;
    aux = n;

    while(fin >> n) {
        if(n % 2 == 0 and n != aux) {
            cout<<n<<" ";
            aux = n;
        }
    }
}
 
int main() {

    char s[10] = "ALIANTA";
    for(int i = 0; i < strlen(s); ++i) {
        if((s[i] == 'A' && s[i + 1] == 'I') || (s[i] == 'A' && s[i - 1] == 'I')) {
            cout<<"";
        } else {
            cout<<s[i];
        }
    }

    return 0;

}

