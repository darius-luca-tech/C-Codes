#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);
int vF[200], q, vfmax;

int main() {
    while(fin >> q) {
        vF[q + 99]++;
    }

    for(int i = -99; i <= 99; ++i) {
        if(vF[i + 99] > vfmax) {
            vfmax = vF[i + 99];
        }
    }

    for(int i = -99; i <= 99; ++i) {
        if(vF[i + 99] == vfmax) {
            cout<<i<<" ";
        }
    }

    return 0;
}