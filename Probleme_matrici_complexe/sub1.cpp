#include <iostream>
using namespace std;

int mat[20][30];

int main() {
    int n, k, aux = 1;
    cin>>n>>k;
    int m = n * k;


    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; j++) {
            for(int l = 1; l <= k; ++l) {
                mat[i][aux] = l + i - 1;
                aux++;
            }
        }
        aux = 1;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}