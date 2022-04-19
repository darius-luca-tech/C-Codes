#include <iostream>
using namespace std;

int main() {
    int x, y, aux;
    cin>>x>>y;

    cout<<y<<" "<<x<<" ";
    while(x > 1) {
        aux = 3 * x - y;
        y = x;
        x = aux;
        cout<<aux<<" ";
    }
    cout<<1;

    return 0;
}