#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    int n = 4, m = 5;
        for(int j = 0; j < m; ++j) {
    for(int i = 0; i < n; ++i) {

            a[i][j] = (m * n - 1) - (i * m - j) - 3;
            cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}