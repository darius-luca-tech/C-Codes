#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; j++) {
            if(i + j == n - 1) {
                m[i][j] = 0;
            } else {
                m[i][j] = abs(n - j - i - 1);
            }
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}