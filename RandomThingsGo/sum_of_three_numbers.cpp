#include <iostream> 
using namespace std; 

int main() {  

    int n; 
    cout<<"Da-ti o valoare lui n:"<<endl; 
    cin>>n; 
    int sum = 0;  

    sum = n%10 + (n/10)%10 + (n/100)%10; 
    cout<<"Suma numerelor numarului este:"<<sum<<endl;  

    int produs = 0;  

    produs = n%10 + (n/10)%10 + (n/100); 
    cout<<"Produsul numerelor numarului este:"<<produs<<endl;    

    /*
    bool d; 
    cout<<"Vrei sa calculezi suma/produsul altui numar?"<<endl; 
    cin>>d; 
    */


    return 0;
}