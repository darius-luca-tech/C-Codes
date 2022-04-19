#include <iostream>
using namespace std;


int main()  {
    int n, coloana;
    cin>>n>>coloana;
    int m[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin>>m[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        m[i][coloana] = 0;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}