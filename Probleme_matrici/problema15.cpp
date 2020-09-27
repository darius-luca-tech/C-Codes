#include <iostream>
using namespace std;

int main() {
    int m[4][5];
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 5; ++j) {
            m[i][j] = j*4 + i + 1;
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    /*
    O:1 5 9 13 17
      2 6 10 14 18
      3 7 11 15 19
      4 8 12 16 20
    */
    return 0;
}