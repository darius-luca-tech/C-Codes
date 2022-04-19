#include <iostream>
using namespace std;

void afisare(int x, int y, int k) {
    int cK = 0;
    for(int i = x; i <= y; ++i) {
        cK++;
        if(cK == k) {
            cout<<i<<" "<<"* ";
            cK = 0;
        } else {
            cout<<i<<" ";
        }
        
    }

    if(cK != k) cout<<"*";
}

int main() {
    afisare(11, 21, 4);
    return 0;
}