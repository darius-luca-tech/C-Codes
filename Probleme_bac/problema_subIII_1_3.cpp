/*
Subprogramul divPrimMax are doi parametri:
• n, prin care primește un număr natural (n[2,10 9 ]);
• p, prin care furnizează cel mai mare divizor prim al lui n.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2000, în urma apelului p=5, deoarece 2000=2 4 5 3 .
*/

#include <iostream>
using namespace std;

int divPrimMax(int n, int p) {
    int d = 2;
    while(n > 1) {
        n = n / d;
        d++;
    }
    return d;
}

int main() {
    cout<<divPrimMax(2000, 5)<<endl;
    return 0;
}