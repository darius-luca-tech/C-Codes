#include <iostream> 
using namespace std; 

int main() { 
    int country; 
    cout<<"Scrie numarul din tara din care provii + 2 cifre din numarul tau de telefon:"<<endl; 
    cin>>country; 
    int first_three; 
    cout<<"Scrie urmatoarele 3 cifre din numarul tau de telefon:"<<endl; 
    cin>>first_three; 
    int last_three; 
    cout<<"Scrie ultimele 3 cifre dn numarul tau de telefon:"<<endl; 
    cin>>last_three; 

    if ((country > 0) && (first_three > 0) && (last_three > 0)) { 
        cout<<"Numarul tau de telefon este:"<<"("<<country<<")"<<" "<<first_three<<" "<<last_three<<endl;
    }
    return 0;
}