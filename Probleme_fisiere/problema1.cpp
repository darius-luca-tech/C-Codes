#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream in("in.txt", ios::in);
    fstream out("out.txt", ios::out);
    
    int a[100][100];
    int b[100][100];
    int c[100][100];

    for(int i = 0; i < 100; ++i) {
        for(int j = 0; j < 100; ++j) {
            in>>a[i][j];
            in>>b[i][j];
            c[i][j] = a[i][j] + b[i][j];
        }
        cout<<endl;
    }

    for(int i = 0; i < 100; ++i) {
        for(int j = 0; j < 100; ++j) {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}