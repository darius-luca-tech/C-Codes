#include <iostream>
using namespace std;

int main() {
    int n, l, k, aux;
    cin>>n>>l>>k;
    int m[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin>>m[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i < n; ++i) {
        aux = m[i][k];
        m[i][k] = m[i][l];
        m[i][l] = aux;
    }

    cout<<endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}