#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);
int vF[100];

int main() {
    int nr;
    while(fin>>nr) {
        vF[nr]++; 
    }

    for(int i = 0; i < 100; ++i) {
        while(vF[i]) {
            cout<<i<<" ";
            vF[i]--;
        }
    }

    cout<<endl;

    return 0;
}


/*
1 2 3 4 5 6 7 8 9 x = 9
9 / 2 = 4 

daca (9 / 2 < x)
v++

*/

