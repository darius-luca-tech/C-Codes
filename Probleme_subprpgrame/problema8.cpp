//se citeste un nr natural n sa se numere cate cifre pare si cate impare are numaru;

#include <iostream>
using namespace std;

void verificare_nr(int &n) {
    int contor_pare = 0;
    int contor_impare = 0;
    
    while(n) {
        if((n % 10) % 2 == 0)
            contor_pare++;
        else 
            contor_impare++;
        
        n /= 10;
    }
    
    cout<<"Numarul are:"<<contor_pare<<" numere pare si "<<contor_impare<<" numere impare"<<endl;
}

int main() {
    int n;
    cout<<"n=";
    cin>>n;
    cout<<"Numarul inainte de operatii:"<<n<<endl;
    verificare_nr(n);
    cout<<"Numarul dupa operatii:"<<n<<endl;
    return 0;
}