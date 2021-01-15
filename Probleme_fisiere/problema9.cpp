#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);
int vF[1000000];
int main() {
    int x;
    while(fin>>x) {
        vF[x]++;
    }

    for(int i = 0; i < 1000000; ++i) {
        if(vF[i] != 0)
            cout<<i<<" ";
    }
    cout<<endl;

    fin.close();
    return 0;
}