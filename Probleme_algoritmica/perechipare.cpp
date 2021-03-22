/*
    Se dă un interval [l,r]. Aflaţi câte perechi de numere pare se pot forma alegând două numere din interval.
    Programul va afișa pe ecran numărul perechilor de numere pare care se pot forma alegând două numere din interval.

*/

#include <iostream>
#include <math.h>
using namespace std;

    long long int l, r, i, counter;
int perechipare(int l, int r) {
    int counter = 0;
    if(l % 2 != 0) {
        l++;
    } else if(r % 2 != 0){
        r--;
    }
    for(int i = l; i <= r; i+= 2) {
        for(int j = l; j <= r; j+=2) {
            if(i % 2 == 0 and j % 2 == 0) {
                counter++;
            }
        }
    }
    return counter;
}

int perechipare2(int l, int r) {
    int counter = 0;
    while(l <= r) {
        if(l % 2 == 0) 
            counter++;
        l++;
    }

    return pow(counter, 2);
}


int main() {

    cin>>l>>r;
    cout<<perechipare2(l, r)<<endl;
    return 0;
}