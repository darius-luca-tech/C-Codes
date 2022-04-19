#include <iostream>
using namespace std; 

int mat[10][10];
int main() {
    int n; cin>>n;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            if(i + j == n + 1) {
                mat[i][j] = n;
            } else if(i + j < n + 1) {
                mat[i][j] = n - (n - j);
            } else {
                mat[i][j] = mat[i][j - 1] - 1;
            }
        }
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}