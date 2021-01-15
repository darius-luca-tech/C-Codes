/*
Subprogramul pDoi are un singur parametru, n, prin care primește un număr natural (n[1,10 9 ]).
Subprogramul returnează cea mai mare valoare din intervalul [1,n], cu proprietatea că este o putere a
lui 2.
Scrieți definiția completă a subprogramului.
*/

#include <iostream>
using namespace std;

int pDoi(int n) {
    int p = 1;
    while(p * 2 <= n) {
        p *= 2;
    }

    return p;
}

int main() {
    cout<<pDoi(20)<<endl;
    return 0;
}