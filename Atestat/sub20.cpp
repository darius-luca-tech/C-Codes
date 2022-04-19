#include <iostream>
using namespace std;

int main() {
    long long n, copieN, rev = 0;
    cin>>n;
    copieN = n;
    
    while(n) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if(copieN == rev) {
        cout<<"PALINDROM";
    } else {
        cout<<"NU ESTE PALINDROM";
    }

    return 0;
}