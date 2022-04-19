#include <iostream>
#include <fstream>
using namespace std;

void generatoare(int n) {
    for(int i = 1; i <= n / 2; ++i) {
        for(int j = n / 2; j >= 1; --j) {
            if(i * j + (i / j) == n) {
                cout<<i<<"-"<<j<<" ";
            }
        }
    }
}

void matrice() {
    int m, n, c = 0, p = 0;;
    cin>>m>>n;
    int a[m][n];

    ifstream fin("in.txt");
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            fin>>a[i][j];
        }
    }

    for(int i = 0; i < m; ++i) {
        c = 0;
        for(int j = 0; j < n; ++j) {
            if(a[i][j] != a[i][j + 1]) {
                c = 1;
            }
        }

        if(c == 1) {
            p++;
        }
    }

    cout<<p<<endl;

}

void sir() {
    ifstream fin("in.txt");
    int n, prev_n, c = 0;
    
    fin>>n;
    prev_n = n;
    c = 1;
    while(fin >> n) {
        if(prev_n != n) {
            if(c == 2) cout<<prev_n<<" ";
            prev_n = n;
            c = 1;
        } else {
            c++;
            // cout<<n<<" ";
        }
    }

    if(c == 2) {
        cout<<prev_n;
    }
}
int main() {
    // generatoare(2020);
    // matrice();
    sir();
    return 0;
}