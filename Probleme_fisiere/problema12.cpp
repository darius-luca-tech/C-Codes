#include <iostream>
#include <fstream>
using namespace std;

bool _equalnumbers(int n) {
    int cifra = n % 10;
    while(n) {
        if(n % 10 != cifra) {
            return false;
        } else {
            n /= 10;
        }
    }

    return true;
}

fstream fout("out.txt", ios::out);

int main() {
    unsigned int a, b;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;

    while(a <= b) {
        if(_equalnumbers(a)) 
            fout<<a<<" ";
        ++a;
    }

    return 0;
}