#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);
fstream fout("out.txt", ios::out);

int main() {
    int mat[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            fin>>mat[i][j];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            fout<<mat[i][j]<<" ";
        fout<<endl;
    }

    return 0;
}