/*
Două numere a și b (a<b) sunt numite divizori pereche ai unui număr natural n dacă a∙b=n.
Subprogramul perechi are un singur parametru, n, prin care primește un număr natural (n[2,10 9 ]).
Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu paritate diferită cu
proprietatea că sunt divizori pereche ai lui n. Fiecare pereche este afișată încadrată între paranteze drepte,
numerele din pereche fiind afișate în ordine strict crescătoare, separate printr-un spațiu, iar dacă nu există
astfel de perechi, se afișează pe ecran mesajul nu exista. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=12 se afișează pe ecran, nu neapărat în această ordine, [1 12][3 4]

*/

#include <iostream>
using namespace std;

int a[15];
bool pair_check(int x, int y) {
    for(int i = 0; i < 15; ++i) {
        for(int j = 0; j < 15; ++j) {
            if(((a[i] == x) or (a[j] == x)) and (a[i] == y) or(a[j] == y))
                return false;
        }
    }

    return true;
}

void divizor(int n) {
    bool pair = false;
    int i1= 0;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            if(((n % i == 0) and (n % j == 0)) and ((i % 2) != (j % 2)) and (i*j == n) and pair_check(i, j)) {
                cout<<"["<<i<<" "<<j<<"]"<<endl;
                pair = true;
                a[++i1] = i;
                a[++i1] = j;

            }
        }
    }

    if(!pair)
        cout<<"nu exista"<<endl;
}

int main() {
    divizor(9);
    return 0;
}
