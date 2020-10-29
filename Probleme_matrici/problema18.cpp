//matrice patratica n * n, sa se afiseze cate elemente de pe aceiasi linie a diagonalei principale sunt egale cu cele de pe diagonala secundara

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    int counter = 0;
    cout<<"Linii/Coloane:";
    cin>>n;
    int mat[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j <  n; ++j) {
            cout<<"mat["<<i<<"]["<<j<<"]=";
            cin>>mat[i][j];
        }
    }

    cout<<endl<<"Aceasta este matricea:"<<endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j <  n; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i < n; ++i) {
        if(mat[i][i] == mat[i][n - 1 - i]) {
            counter++;
        }
    }

    cout<<endl<<counter<<endl;

    return 0;
}