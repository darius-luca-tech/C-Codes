#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);
fstream fout("out.txt", ios::out);

int cmmmdc(int a, int b) {
    int rest;
    while(b != 0) {
        rest = a % b;
        a = b;
        b = rest;
    }

    return a;
}

int cmmmc(int a, int b) {
    return (a * b) / cmmmdc(a, b);
}

int main() {
    int a, b;
    int n;
    fin>>n;
    cout<<n<<endl;
    while(n) {
        fin>>a>>b;
        fout<<a<<" "<<b<<":"<<cmmmdc(a, b)<<", "<<cmmmc(a, b)<<endl;
        n--;
    }

    return 0;
}