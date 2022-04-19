#include <iostream>
#include <fstream>
using namespace std;

int vF[10];
int factori(int n, int m) {
    int f = 2, p = 0, c = 0;

    while(n > 1) {
        p = 0;
        while(n % f == 0) {
            p++;
            n /= f;
        }

        if(p > 0) {
            cout<<f<<"^"<<p<<" ";
            vF[f]++;
        }
        f++;
    }
    cout<<endl;

    f = 2;
    while(m > 1) {
        p = 0;
        while(m % f == 0) {
            p++;
            m /= f;
        }

        if(p > 0) {
            cout<<f<<"^"<<p<<" ";
            vF[f]++;
        }
        f++;
    }

    for(int i = 1; i <= 9; ++i) {
        if(vF[i] == 2) {
            c++;
        }
    }

    return c;
}

void matrice() {
    int n; cin>>n;
    int mat[20][20];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i + j < n - 1) {
                mat[i][j] = n - j - i - 1;
            } else if(i + j  == n - 1) {
                mat[i][j] = 0;
            } else {
                mat[i][j] = abs(n - (j + i + 1));
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

void sir() {
    ifstream fin("in.txt");
    bool ok = false;
    int n, c = 0;

    while(fin >> n) {
        if(ok) {
            c++;
        }

        if(n < 0 and !ok) {
            ok = true;
            c++;
        }
    }

    cout<<c;
}

int main() {
    sir();
    return 0;
}