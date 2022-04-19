#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

fstream fin("bac.txt");
int main() {
    int nrCurrent, nr, lungimeNr, lmax = 0, currentL = 1;

    fin>>nr;
    while(fin>>nrCurrent) {
        lungimeNr = (int)log10(nrCurrent);
        // cout<<lungimeNr<<" ";

        if(int(nrCurrent / pow(10, lungimeNr)) == nr % 10) {
            currentL++;
        } else {
            if(currentL > lmax) {
                lmax = currentL;
                currentL = 1;
            }
        }

        
        nr = nrCurrent;
    }

    cout<<lmax;
    return 0;
}