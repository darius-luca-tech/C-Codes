#include <iostream>  
using namespace std; 

int main() { 
    int a; 
    cout<<"Introdu un numar:"<<endl; 
    cin>>a; 
    int rev = 0; 
    int digit; 

    do {   

        digit = a % 10;
        rev = (rev * 10) + digit; 
        a = a / 10;

    } while (a != 0); 

    cout<<rev<<endl;
    if (a == rev) {  
        cout<<"Numarul nu este palindrom"<<endl; 
    } else { 
        cout<<"Numarul este palindrom"<<endl;
    } 

   return 0;
}