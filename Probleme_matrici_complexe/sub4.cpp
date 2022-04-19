#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m[n][n];


    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 5; j++) {
            m[i][j] = 5 * ( i + 1) - j;
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}