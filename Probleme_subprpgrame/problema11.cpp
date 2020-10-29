#include <iostream>
using namespace std;

void tablou_citire(int *a, int n) {
    for(int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"]=";
        cin>>*(a+i);
    }
}

void tablou_afisare(int *a, int n) {
    for(int i = 0; i < n; ++i) {
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cout<<"n=";
    cin>>n;
    int a[n];

    tablou_citire(a, n);
    tablou_afisare(a, n);

    return 0;
}