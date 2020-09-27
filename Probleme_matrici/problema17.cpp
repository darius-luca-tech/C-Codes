#include <iostream>
using namespace std;

int main() {
    int r =  3, c = 3;
    int a[r][c];
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            if(i > j) {
                a[i][j] = j;
            } else {
                a[i][j] = i;
            }
            cout<<a[i][j] <<" ";
        }
        cout<<endl;
    }
}