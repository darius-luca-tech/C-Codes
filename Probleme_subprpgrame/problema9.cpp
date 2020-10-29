#include <iostream>
using namespace std;

int suma = 0;

bool check_nr_impar(int n) {
    bool check = true;
    while(n) {
        if((n % 10) % 2 == 1)
            check = true;
        else 
            check = false;
            break;
    }

    if(check)
        return true;
    else 
        return false;
}

int add_numar(int &suma, int numar) {
    suma += numar;
    return suma;
}

int main() {
    int n;
    cout<<"n=";
    cin>>n;

    int numar;
    for(int i = 1; i <= n; ++i) {
        cout<<"n=";
        cin>>numar;
        if(check_nr_impar(numar)) {
            add_numar(suma, numar);
            cout<<"Numarul "<<numar<<" are toate cifrele impare..."<<endl<<endl;
        } else {
            cout<<"Acest numar nu are toate cifrele impare"<<endl;
        }
    }

    cout<<"Suma numerelor care au toate cifrele impare: "<<suma<<endl;
    cout<<endl<<"Sfarsit de program"<<endl;
    return 0;
}