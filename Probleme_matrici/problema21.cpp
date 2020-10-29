#include <iostream>
#include <fstream>

using namespace std;

int a[100][100], b[100][100], c[100][100];

int main() {
    for(int j = 1; j <= 5; ++j) {
        for(int i = 0; i <= 3; ++i) {
            a[i][j] = 10 - j;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}