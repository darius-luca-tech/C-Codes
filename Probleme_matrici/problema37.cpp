#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("in.txt");

int main() {
    int n, k; cin>>n>>k;
    int mat[n][n];

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            fin>>mat[i][j];
        }
    }

    int aux = mat[k][n - (n - k) - 1];
    cout<<aux<<endl;
    for(int i = k;  i >= 1; i--) {
        mat[k][i] = mat[k][i - 1];
    }
    mat[k][1] = aux;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
} 