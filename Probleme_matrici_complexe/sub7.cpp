#include <iostream>
using namespace std;

int main() {
    int m[6][6];

    for(int i = 1; i <= 5; ++i) {
        for(int j = 1; j <= 5; ++j) {
            m[i][j] = (i * j) % 5;
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}