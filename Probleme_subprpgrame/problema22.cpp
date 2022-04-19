#include <iostream>
using namespace std;

void nrfp(int n, int &m) {
    int i, x, d, p, k, maxi = 0;

    for(i = 2; i <= n; ++i) {
        x = i;
        k = 0;
        d = 2;

        while(x > 1) {
            p = 0;
            while(x  % d == 1) {
                p++;
                x = x / d;
            }

            if(p != 0) {
                k++;
            }
            d++;
        }

        if(k > maxi) {
            m = i;
            maxi = k;
        }
    }

}

int main() {
    int n;
    nrfp(100, n);
    cout<<n;
    return 0;
}