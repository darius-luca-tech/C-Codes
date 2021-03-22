#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);

int main() {
    int n;
    fin>>n;

    int v[n];
    for(int i = 0; i < n; ++i) {
        fin>>v[i];
    }

    for(int i = 0; i < n; ++i) {
        if(v[i] % 2 == 0) {
            for(int j = n -1; j>i; --j) {
                v[j+1] = v[j];
            }
            v[i+1] = 2019;
            n++;++i;
        }
    }
    for(int i = 0; i < n; ++i) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;

}