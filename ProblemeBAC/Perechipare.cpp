//
// Created by lucac on 8/9/2021.
//
#include <iostream>
using namespace std;

long long int l, r, counter;
int perechipare(int l, int r){
    if(l % 2 != 0) {
        l++;
    } else if(r % 2 != 0) {
        r--;
    }

    while(l <= r) {
        l += 2;
        counter++;
    }

    return counter * counter;
}

int main() {
    int l, r;
    cin>>l>>r;
    cout<<perechipare(l, r)<<endl;
    return 0;
}
