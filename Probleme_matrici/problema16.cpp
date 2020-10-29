//inserarea unei linii intr-o matrice

#include <iostream>
using namespace std;

//ind_linie - indicele liniei
//r - randuri
//c - coloane

int main() {
    int r, c, ind_linie;
    cout<<"Randuri/Coloane:";
    cin>>r>>c;
    int a[r][c];

    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            a[i][j] = i * r + j + 1;
        }
    }

    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}