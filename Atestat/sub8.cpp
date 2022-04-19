#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin>>m[i][j];
        }
    }

    int maxDp = m[0][0];
    int maxDs = m[0][n - 1];

    for(int i = 0; i < n; ++i) {
        if(m[i][i] > maxDp) {maxDp = m[i][i];}
        if(m[i][n - i - 1] > maxDs) {maxDs = m[i][n - i - 1]; }
    }

    cout<<endl<<maxDp<<" "<<maxDs;
    return 0;
}