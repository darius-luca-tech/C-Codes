#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            if(i == j || i == 3-1-j)
                a[i][j] = 1;
            else 
                a[i][j] = 0;
            
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    /*
    O: 1 0 1
       0 1 0
       1 0 1
    */
    return 0;
}