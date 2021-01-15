#include <iostream>
using namespace std;

void putere(int n , int &d, int &p) {
    int p1, d1;
    d1 = 2;
    while(n > 1) {
        p1 = 0;
        while(n % d1 == 0) {
            p1++;
            n = n / d1;
        }

        if(p1 > p) {
            p = p1;
            d = d1;
        } else 
            d = d1;

        if(p1 != 0)
            cout<<d1<<"^"<<p1<<endl;
            
        d1++;

    }
}

int main() {
    int d = 5;
    int p = 1;
    putere(10780, d, p);
    return 0;
}