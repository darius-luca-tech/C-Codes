#include <fstream>
#include <iostream>
using namespace std;

int baza(int n) {
    int b = 1, max = 0;
    while(n) {
        if(n % 10 > max) {
            max = n % 10;
        }
        n /= 10;
    }

    b += max;
    return b;
}

void p() {
    ifstream fin("in.txt");
    int n, suma = 0, sumaMax = 0;
    
    while(fin >> n) {
        suma += n;

        if(suma < 0) {
            suma = 0;
        }

        if(suma > sumaMax) {
            sumaMax = suma;
        }
    }

    cout<<sumaMax;
}

int main() {
    p();
    return 0;
}