#include <iostream>
using namespace std;

int main() {
    int n, x = 1, m = 0, p = 1, cn, c;
    cin >> n;


    while(x < 10) {
        cn = n;
        while(cn) {
            c = cn % 10;
            cn = cn / 10;
            if(c == x) {
                m = c * p + m;
                p = p * 10;
            }
        }
    }
}