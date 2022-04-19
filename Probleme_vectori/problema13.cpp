#include <iostream>
#include <fstream>
using namespace std;

int vF[10], x;
long long nr;
ifstream fin("in.txt");

int main() {
    while(fin>>x) {
        while(x) {
            vF[x % 10]++;
            x /= 10;
        }
    }

    for(int i = 9; i >= 0; --i) {
        if(vF[i] != 0) {
            while(vF[i]) {
                nr = nr * 10 + i;
                vF[i]--;
            }
        }
    }

    cout<<nr<<endl;
    return 0;
}