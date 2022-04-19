#include <iostream>
using namespace std;

int mat[10][10];
int main() {
    int n; cin>>n; 

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i + j == n - 1) {
                mat[i][j] = 0;
            } else if(i + j < n - 1) {
                mat[i][j] = n - (i + j) - 1; 
            } else {
                mat[i][j] = mat[i][j - 1] + 1;
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl; 
    }

    return 0;
}