//1 - prima linie , prima coloana, ultima coloana, ultima linie
//0 - rest


#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            if(i == 0 or j == 0 or i == 3 or j == 3) {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}