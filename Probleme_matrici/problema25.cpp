#include <iostream>
using namespace std;

int a[5][5];
int main() {
    for(int i = 1; i <= 5; ++i) {
        for(int j = 1; j <= 5; ++j) {
            // if(i + j < 6) {
            //     a[i][j] = (i+j)
                a[i][j] = (i+j)%5;
        
        }
    }

    for(int i = 1; i <= 5; ++i) {
        for(int j = 1; j <= 5; ++j) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}