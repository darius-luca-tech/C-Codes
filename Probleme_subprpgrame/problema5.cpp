//se citesc n numere perechi de numere intregi sa se afiseze cel mai mare divizor comun pentru fiecare pereche

#include <iostream>
using namespace std;

int cmmdc(int a, int b) {
    while(a != b) {
        if(a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    return a;
}

int main() {
    int n;
    cout<<"caten umere doriti sa cititi:";
    cin>>n;
    int a;
    int b;
    int count;
    while(n) {
        count = 1;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
        cout<<"Din perechea "<<count<<" cmmdc este: "<<cmmdc(a, b)<<endl;
        n--;
        count++;

    }
    return 0;
}