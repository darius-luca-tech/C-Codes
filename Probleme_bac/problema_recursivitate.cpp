#include <iostream>
using namespace std;

int f(int x, int y) {
    if(y<1) return 0;
    else if (x % y == 0) return 1 + f(x/y, y);
    else return 2020;
}

int main() {
    cout<<f(2020, 2)<<endl;
    return 0;
}