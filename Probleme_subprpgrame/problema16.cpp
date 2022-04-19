/*
    struct carte {
        char titlu[50];
        char autor[10][50];
        int nrExemplare;
    } c;

    strcpy(s, "informatica"); s = informatica
    cout<<strlen(s); 11
    for(i = 0; i < 11; ++i) 

    O:11*nf*rm*t*c*

    2222

    3 

*/

#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

int vF[10];
int identice(int n) {
    int aux = n;

    while(n) {
        vF[n%10]++;
        n /= 10;
    }

    for(int i = 0; i < 10; ++i) {
        if(vF[i] == int(log10(aux) + 1)) {
            return 1;
        }
    }

    return 0;
}

int a[10][10];
void matrice(int n, int m) {

    for(int i = 1; i <= m; ++i) {
        for(int j = 1; i <= n; ++j) {
            a[i][j] = (i * j) % 10;
        }
        cout<<endl;
    }

    for(int i = 1; i <= m; ++i) {
        for(int j = 1; i <= n; ++j) {
            cout<<a[i][j]<<" ";
        }
    }
}

fstream fin("in.txt", ios::in);

int main() {
    int x, max;
    max = INT8_MIN;
    while(fin>>x) {
        if(x >= max) {
            max = x;
            cout<<max<<" ";
        } else {
            cout<<max<<" ";
        }
    }

    return 0;
}