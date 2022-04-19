#include <iostream>
using namespace std;

int main() {
    int n, k, aux = 1;
    cin>>n>>k;
    int m[n * k][n];

    for(int i = 1; i <= n * k; ++i) {
        for(int j = 1; j <= n; ++j) {
            for(int l = 1; l <= k; l++) {
                m[i][aux] = l + j - 1;
                aux++;
            }
        }
        aux = 1;
    }

    for(int i = 1; i <= n * k; i++){
        for(int j = 1; j <= n; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}