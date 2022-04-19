#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int nr; cin>>nr;
    int n = log10(nr) + 1;
    int m[n][n];

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            m[i][j] = (int) (nr / pow(10, n - j)) % 10;
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}