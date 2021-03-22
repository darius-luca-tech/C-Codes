#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);
int cautarebinara(int n, int v[], int x) {
    //v[mijloc] == x
    int sol = -1;
    int stanga = 0, dreapta = n-1;
    while(stanga <= dreapta) {
        int mijloc=(stanga + dreapta) / 2;
        if(v[mijloc] < x) {
            sol = v[mijloc];
            stanga = mijloc + 1;
        } else {
            dreapta = mijloc - 1;
        }
    }

    return sol;
}

int main() {
    int n, x, i = 0, nr;
    fin>>n;
    int v[n];
    for(int i = 0; i < n; ++i) {
        fin>>v[i];
    }
    fin>>nr;
    cout<<nr<<endl;
    cout<<cautarebinara(n, v, nr)<<endl;

    return 0;
}
