#include <iostream>
using namespace std;

int main() {
    int a[3][5];
    int x = 2;
    for(int j = 1; j <= 5; ++j) {
        for(int i = 1; i <= 3; ++i) {
            if(i == 1 or j == 1) 
                a[i][j] = 1;
            else
                a[i][j] = x;
                x = x + 1;
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}