//se citeste un vector n . se cere sa se tipareasca cmmdc a elementelor vectorului
#include <iostream>
using namespace std;

int cmmdc(int a, int b) {
    int n1 = a;
    int n2 = b;
    while(a != b) {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}

void citire_tablou(int *a, int n) {
    for(int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"]=";
        cin>>*(a+i);
    }
}

int main() {
    int n;
    cout<<"n=";
    cin>>n;

    int a[n];
    citire_tablou(a, n);
    int c;
    for(int i = 0; i < n; ++i) {
        cout<<"CMMDC dintre "<<a[i]<<" si "<<a[n-i-1]<<" este "<<cmmdc(a[i], a[n-i-1])<<endl;
    }

    return 0;
}

/*
    sa zicem ca n = 3, si numerele 12. 14. 16;
    se va calcula cmmmdc asa:12-16, 14-14, 14-12

*/