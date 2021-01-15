/*

Subprogramul produs are doi parametri:
• n, prin care primește un număr natural (n[0,10 9 ]);
• p, prin care furnizează produsul cifrelor pare distincte din scrierea acestuia, sau -1 dacă nu există
astfel de cifre.
Scrieți definiția completă a subprogramului.

*/

#include <iostream>
#include <cmath>
using namespace std;

bool check(int *a, int nr) {
    int i = 0;
    while(*a) {
        if(*(a + i) == nr)
            return true;
        ++i;
    }

    return false;
}

int produs(int n, int &p) {
    int marime = log10(n) + 1;
    int v[marime];

    for(int i = 0; i < marime; ++i) {
        v[i] = n % 10;
        p *= n % 10;
        cout<<n%10<<endl;
        n /= 10;
    }


    return 0;
}

int main() {
    int p = 1;
    cout<<produs(1622325, p)<<endl;
    return 0;
}