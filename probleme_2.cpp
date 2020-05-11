#include <iostream> 
using namespace std; 


int main() { 
    int n; 
    cout<<"cate numere vreti sa cititi:"; 
    cin>>n; 

    int a; 
    cout<<"a="; 
    cin>>a; 

    int maxim = a; 
    int minim = a; 

    for(int i = 1; i < n; i++) { 
        int a; 
        cout<<"a="; 
        cin>>a; 

        if(maxim < a){ 
            maxim = a; 
        } 

        if(minim > a) { 
            minim = a;
        } 
    } 
    cout<<"Numarul cel mai mic din sir este:"<<minim<<endl; 
    cout<<"Numarul cel mai mare din sir este:"<<maxim<<endl; 

    return 0;
}