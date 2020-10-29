//fie o matrice patratica , suma cifrelor = suma pozitiei
#include <iostream>
using namespace std;

int sumaNumar(int n) {
    int suma = 0;
    while(n) {
        suma += n % 10;
        n /= 10;
    }

    return suma;
}

int main() {
    int r = 3;
    int c = 3;
    int counter = 0;
    int mat[r][c];
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cout<<"mat["<<i<<"]["<<j<<"]=";
            cin>>mat[i][j];
        }
    }

    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            if(sumaNumar(mat[i][j]) == i + j) {
                counter++;
            }
        }
    }

    cout<<endl<<counter<<endl;
    return 0;
}