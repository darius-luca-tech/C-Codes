#include <iostream>
using namespace std;


int main()  {
    int n, linie;
    cin>>n>>linie;
    int m[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin>>m[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        m[linie][i] = 0;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}