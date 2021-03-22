#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);

int vF[100];

int main() {
    int x;
    while(fin>>x) {
        vF[x]++;
    }

    for(int i = 0; i < 100; ++i) {
        if(vF[i] == 1) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}