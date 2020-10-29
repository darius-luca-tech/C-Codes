#include <iostream>
using namespace std;

int main() {
    int r = 3;
    int c = 3;
    int mat[r][c];
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cout<<"mat["<<i<<"]["<<j<<"]=";
            cin>>mat[i][j];
        }
    }

    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    int minim;
    for(int j = 0; j < c; ++j) {
        minim = mat[0][j];
        for(int i = 0; i < r; ++i) {
            if(minim > mat[i][j]) 
                minim = mat[i][j];
        }
        cout<<minim<<" ";
    }
    cout<<endl;
    return 0;
}
