#include <iostream>
#include <fstream>
using namespace std;


ifstream fin("in.txt");
int main() {
    long long x, l = 0, lmax = 0, inceput = 0, sfarsit = 0;
    bool ok = true;

    while(fin>>x) {

        l++;
        if(inceput == 0 and x > 0) {
            inceput = l;
        }

        if(x > 0 && inceput != 0) {
            sfarsit = l;
        }

    }

    
    if(sfarsit != 0 and (l - inceput + 1 > sfarsit)) {
        cout<<l - inceput + 1;
    } else if(sfarsit != 0 and (l - inceput + 1 < sfarsit)) {
        cout<<sfarsit;
    }

    if(sfarsit == 0 and inceput > l / 2) {
        cout<<inceput;
    } else if(sfarsit == 0 and inceput < l / 2) {
        cout<<l - inceput + 1;
    }

    return 0;

}