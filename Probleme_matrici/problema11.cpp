/*
    Ca in algoritmul anterior, dar aici scadem din numarul maxim de elemente , elementul actual.
    i = 0, j = 0 => a[0][0] = 15 - 0 = 15.
    Asa , toate elementele se vor scrie in ordine descrescatoare
*/

#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    int n = 4, m = 4;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            a[i][j] = (m * n - 1) - (i * m + j);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}