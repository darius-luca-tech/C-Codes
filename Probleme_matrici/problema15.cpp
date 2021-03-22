#include <iostream>
using namespace std;

int main() {
    int m[4][5];
    for(int i = 0; i < 4; ++i) {
        for(int j = 4; j >= 0; --j) {
            m[i][j] = i*5 + j + 1;
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}