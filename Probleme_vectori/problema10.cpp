#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("in.txt");
int vF[99], k, max1 = 0, max2;

int main() {
    while(fin >> k) {
        if(int(log10(k)) + 1 == 2) {
            vF[k]++;
            cout<<k<<" ";
        }
    }
    cout<<endl;

    for(int i = 99; i >= 10; --i) {
        if(vF[i] == 0 && ((i / 10) != (i % 10)) && (max1 == 0)) {
            max1 = i;
        }

        if(vF[i] == 0 && ((i / 10) != (i % 10)) && (max2 == 0) && (i != max1)) {
            max2 = i;
        }
    }

    if(max1 == 0 || max2 == 0) {
        cout<<"nu exista";
    } else {
        cout<<max1<<" "<<max2<<endl;
    }
    
    return 0;
}