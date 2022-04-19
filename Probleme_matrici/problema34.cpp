#include <iostream>
using namespace std;

char a[10][10];
int main() {
    int n = 6;
    for(int i = 0; i < 6; ++i) {
        for(int j = 0; j < 6; ++j) {
            if(i == j) {
                a[i][j] = '(';
                if(i >= 3) a[i][j] = ')';
            } else if(i + j == n - 1) {
                a[i][j] = ')';
                if(i >= 3) a[i][j] = '(';
            } else if(i < j and i + j < n - 1) {
                a[i][j] = '(';
                if(j >= 3) a[i][j] = ')';
            } else if(i > j and i + j > n - 1) {
                a[i][j] = '(';
                if(j >= 3) a[i][j] = ')';
            } else {
                a[i][j] = '*';
            }
        }
    }

    for(int i = 0; i < 6; ++i) {
        for(int j = 0; j < 6; ++j) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}