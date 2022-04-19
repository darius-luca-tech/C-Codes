#include <iostream>  
#include <math.h>
using namespace std; 

int main(){ 
    int n; 
    cout<<"Dimensiune_vector="; 
    cin>>n; 
    int counter = 0;
    int a[n]; 
    for(int i = 0; i <= n; i++) { 
        cout<<"a["<<i<<"]="; 
        cin>>a[i];
    } 

    for(int i = 0; i <= n; i++) {  
        for(int j = 2; j <= sqrt(n); j++) { 
            if(a[i] % j != 0) {  
                cout<<a[i]<<" ";
                counter++;
            } 
        }
    } 

    if(counter == 0) {  
        cout<<"Sirul care contine elementele:";
        for(int i = 0; i <= n; i++) { 
            cout<<a[i]<<",";
        } 
        cout<<" "<<"este neprim"<<endl;
    }
    cout<<"In sir se afla:"<<counter<<" numere prime"<<endl; 
    return 0;
} 
