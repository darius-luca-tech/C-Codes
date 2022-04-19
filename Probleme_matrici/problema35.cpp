#include <iostream>
using namespace std;

int a[100][100];
int main() {
    for(int i = 3; i >= 0; --i) {
        for(int j = 0; j < 5; ++j) {
            a[i][j] = 4 * (i + 1) - (4 - j - i - 1);
        }
    }

    for(int i = 3; i >= 0; --i) {
        for(int j = 0; j < 5; ++j) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }    
    return 0;
}