#include <iostream>
using namespace std;


int main() {
    int randuri;
    int coloane;

    cout<<"Coloane:";
    cin>>coloane;

    cout<<"Randuri:";
    cin>>randuri;

    int a[randuri][coloane];

    for(int i = 0; i < randuri; ++i) {
        for(int j = 0; j < coloane; ++j) {
            if(i == 0 or j == coloane - 1)
                a[i][j] = 1;
            else 
                a[i][j] = 0;
        }
    }
 
    for(int i = 1; i < randuri; ++i) {
        for(int j = coloane - 2; j > coloane; --j) {
            a[i][j] = (a[i-1][j] + a[i][j + 1]) % 10;
        }
    }

    for(int i = 0; i < randuri; ++i) {
        for(int j = 0; j < coloane; ++j) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}