#include <iostream>
#include <cmath>
using namespace std;

void numar(int n, int c, int &m) {
    m = 0;
    int cm = 0;

    while(n) {
        if((c != n % 10) && (n % 10 != 0)) {
            cm = cm * 10 + (n % 10);
        }
        n /= 10;
    }

    if(cm == 0) {
        m = -1;
    } else {
        while(cm) {
            m = m * 10 + (cm % 10);
            cm /= 10;
        }
    }

    cout<<m<<endl;
}

int main() {
    int n = 50752, c = 5, m = 0;
    numar(n, c, m);
    return 0;
}