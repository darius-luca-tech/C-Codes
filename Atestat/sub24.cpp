#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cin>>n;

    for(int d = 1; d < n; ++d) {
        if(n % d) {
            suma += d;
        }
    }

    cout<<(suma == n);
    return 0;
}