#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, mA = 0;
    cin>>n;
    int nrC = log10(n) + 1;

    while(n) {
        mA += n % 10;
        n /= 10;
    }

    cout<<mA / nrC;
    return 0;
}