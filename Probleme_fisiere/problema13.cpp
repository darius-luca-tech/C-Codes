#include <iostream>
#include <fstream>
using namespace std;

int _sumanr(int n)  {
    int suma = 0;
    while(n) {
        suma += n % 10;
        n /= 10;
    }

    return suma;
}

fstream fout("out.txt", ios::out);

int main() {
    int a, b;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;

    while(a <= b) {
        if((a / _sumanr(a)) == (a % _sumanr(a)))
            fout<<a<<" ";
        a++;
    }

    return 0;
}