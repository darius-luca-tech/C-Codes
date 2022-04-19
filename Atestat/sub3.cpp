#include <iostream>
using namespace std; 

int main() {
    int n, k, m1;
    cin>>n>>m1>>k;
    int m[n][m1];

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m1; ++j) {
            cin>>m[i][j];
        }
    }

    for(int i = k; i < n; ++i) {
        for(int j = 1; j <= m1; ++j) {
            m[i][j] = m[i + 1][j];
        }
    }

    cout<<endl;
    for(int i = 1; i < n; ++i) {
        for(int j = 1; j <= m1; ++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}