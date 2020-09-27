#include <iostream>
using namespace std;

int main() {
    int n, m;
    int counter = 0;
    cin>>n>>m;
    int mat[n][m];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout<<"mat["<<i<<"]["<<j<<"]=";
            cin>>mat[i][j];
            if(mat[i][j] % 2 == 0) counter++;
        }
    }

    cout<<"Matricea are "<<counter<<" elemente pare"<<endl;
    return 0;
}