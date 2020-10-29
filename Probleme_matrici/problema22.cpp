#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    int sum = 0;
    for(int i = 0; i < 4; ++i) {
        for(int j =0; j < 4; ++j) {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    }

    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            if(i == 0 or j == 0 or i == 4 - 1 or j == 4 - 1) {
                sum += a[i][j];
            }
        }
    }

    for(int i = 0; i < 4; ++i) {
        for(int j =0; j< 4; ++j) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<sum<<endl;
    return 0;
}