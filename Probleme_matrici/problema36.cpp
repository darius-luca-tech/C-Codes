#include <iostream>
#include <fstream>
using namespace std;

int putere(int n, int p) {
    int contor = 0;
    while(n % p == 0) {
        contor++;
        n = n / p;
    }

    return contor;
}

ifstream fin("in.txt");


int vF[20];
int main() {
    int m, n;
    cin>>m>>n;
    int a[m][n];
    bool ok = true;

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            fin>>a[i][j];
            if(j == 0 || j == n - 1) {
                vF[a[i][j]]++;
            }
        }
    }

    for(int i = 0; i <= 20; ++i) {
        if(vF[i] == 2) {
            cout<<i<<" ";
            ok = true;
        }
    }

    if(!ok) {
        cout<<"nepolarizate";
    }

    return 0;
}