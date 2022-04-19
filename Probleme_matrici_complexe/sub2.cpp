#include <iostream>
using namespace std;

int m[5][7];
int main() {
    
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 7; ++j) {
            m[i][j] = 1;
        }
    }

    for(int i = 1; i < 5; ++i) {
        for(int j = 1; j < 7; ++j) {
            m[i][j] = (m[i][j - 1] + m[i - 1][j]) % 10;
        }
        cout<<endl;
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 7; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}