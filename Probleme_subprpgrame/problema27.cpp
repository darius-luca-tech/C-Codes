#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("in.txt");

void frate(int x, int &y) {
    int p = 1;
    while(x) {
        if(x % 10 < 9) {
            y = (x % 10 + 1) * p + y;
            p *= 10;
        } else {
            y = -1;
            break;
        }

        x /= 10;
    }
}

int main() {
    int p, n, c = 0;
    fin >> p;

    while(fin >> n) {
        if(n <= p) {
            c++;
        }
    }

    cout<<c;

    return 0;
}