#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);
int vF[100], vU[100];

int main() {
    int x;
    int i = 0;
    while(fin>>x) {
        i++;
        if(vF[x] == 0) vF[x]=i;
        vU[x]=i;
    }

    for(int i = 0; i < 100; ++i) {
        if(vF[i])
            cout<<i<<" "<<vU[i]-vF[i]<<endl;
    }
    cout<<endl;
    return 0;
}