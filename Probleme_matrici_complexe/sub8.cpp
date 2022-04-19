#include <iostream>
using namespace std;

int main() {
    int a[8][8];

    for(int i = 1; i <= 7; ++i) {
        for(int j = 1; j <= 7; ++j) {
            if(i + j == 8) {
                a[i][j] = 2;
            } else if(i + j < 8) {
                a[i][j] = 1;
            } else {
                a[i][j] = 3;
            }

            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}