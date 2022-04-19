#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

ifstream fin("in.txt");
int dublu(int n) {
    if(((int)log10(n) + 1) % 2 == 0) {
        return -1;
    }

    int copie = 0, rezultat = 0, lungime = ((int)log10(n) + 1) / 2, c = 0;
    bool ok = true;

    while(n) {
        copie = copie * 10 + (n % 10);
        if(c == lungime) {
            copie = copie * 10 + (n % 10);
            ok = false;
        }
        c++;
        n = n / 10;
    }
    
    cout<<copie<<endl;
    while(copie) {
        rezultat = rezultat * 10 + (copie % 10);
        copie /= 10;
    }

    return rezultat;
}

int x[1000000], y[1000000], m, n;
int main() {

    fin>>m;
    for(int i = 0; i < m; ++i) {
        fin >> x[i];
    }

    fin>>n;
    for(int j = 0; j < n; ++j) {
        fin >> y[j];
    } 

    for(int i = 0; i < m; ++i) {
        if(x[i] > y[i] ) {

            if(x[i] % 3 == 0) {
                cout<<x[i]<<" ";
            }

            if(y[i] % 3 == 0) {
                cout<<y[i]<<" ";
            } 

        } else {
            if(y[i] % 3 == 0) {
                cout<<y[i]<<" ";
            } 

            if(x[i] % 3 == 0) {
                cout<<x[i]<<" ";
            }
        }
    }

    return 0;
}