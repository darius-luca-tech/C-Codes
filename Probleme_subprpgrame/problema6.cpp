#include <iostream>
using namespace std;

bool nrpar(int numar) {
    bool par = true;
    while(numar) {
        if((numar % 10) % 2 == 0) {
            par = true;
        } else {
           par = false;     
        }
        numar = numar / 10;
    }

    if(par) 
        return true;
    else    
        return false;

}

int main() {
    int n, a; //nr de numere
    cout<<"n=";
    cin>>n;
    int suma = 0;
    for(int i = 1; i <= n; ++i) {
        cout<<"a=";
        cin>>a;
        if(nrpar(a)) {
            cout<<"Numarul "<<a<<" este par"<<endl;
            suma += a;
        } else {
            cout<<"Numarul "<<a<<" nu este par"<<endl;
        }
    }
    
    cout<<suma<<endl;
    return 0;
}