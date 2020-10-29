#include <iostream>
using namespace std;

int suma(int n) {
    int suma = 0;
    for(int i = 1; i <=n; ++i) {
        suma += i;
    }
    return suma;

}

double f(int a, float b) {
    return static_cast<float>(a + b);
}

void f(double a) {
    cout<<a<<endl;
}

int main() {

    int *a = new int;
    *a = 5;
    if(!a) {
        cout<<"Failed"<<endl;
        delete a;
    }

    delete a;
    cout<<"DELETED"<<endl;

    // f(12.6);

    cout<<f(3, 14.5)<<endl;
    return 0;
}