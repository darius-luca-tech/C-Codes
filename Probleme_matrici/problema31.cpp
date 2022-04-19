#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x; cin>>x;
    int nrX = (int) log10(x) + 1;
    int cX = 0; int mat[nrX][nrX];

    while(x) {
        cX = cX * 10 + (x % 10);
        x /= 10;
    }

    for(int i = 0; i < nrX; ++i) {
        x = cX;
        for(int j = 0; j < nrX; ++j) {
            mat[i][j] = x % 10;
            x /= 10;
        }
    }

    for(int i = 0; i < nrX; ++i) {
        for(int j = 0; j < nrX; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}