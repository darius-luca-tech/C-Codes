#include <iostream>
using namespace std;


int mat[100][100];
int main() {
    int n, k, aux;
    cin>>n>>k;

    for(int i = 1; i <= n; ++i) {
        aux = i;
        for(int j = 1; j <= n * k; ++j) {
            mat[i][j] =  aux;
            if(j % k == 0) {
                aux++;
            }
        }
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n * k; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}