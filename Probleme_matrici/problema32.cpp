#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("in.txt");

int main() {
    int n, suma = 0; cin>>n;
    int mat[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            fin>>mat[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i < j && i + j > n - 1 && j != 6) {
                suma += mat[i][j];
            }
        }
    }

    cout<<suma;
    return 0;
}