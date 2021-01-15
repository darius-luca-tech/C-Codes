#include <iostream>
using namespace std;

int f(int x) {
    if(x > 20)
        return 2 * f(x/10);
    return 20;
}

int main() {
    cout<<f(200200)<<endl;
    cout<<char('r' + (1-1)*(1-1%2) + 3*(2*1/3-1)*(1%2))<<endl;
    return 0;
}