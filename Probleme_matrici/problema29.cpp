#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt");

int main() {
    int m, n, max;
    cin>>m>>n;
    int mat[m][n];

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            fin>>mat[i][j];
        }
    }

    cout<<"---------"<<endl;
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i < m; ++i) {
        max = mat[i][0];
        for(int j = 1; j < n; ++j) {
            if(mat[i][j] > max && mat[i][j] < 21) {
                max = mat[i][j];
            } 
        }
        
        if(max == mat[i][0]) {
            cout<<"nu exista"<<endl;
        } else {
            cout<<max<<endl;
        }
    } 

    return 0;
}