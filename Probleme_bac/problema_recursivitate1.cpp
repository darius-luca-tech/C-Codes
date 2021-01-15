
#include <iostream>
using namespace std;


void f(int n) {
    if(n != 0)
        f(n / 10);
        if(n % 2 == 0)
            cout<<n%10;
}

int main() {
    f(54321);
    return 0;
}