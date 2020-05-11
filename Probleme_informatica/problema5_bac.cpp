#include <iostream> 
using namespace std; 

int main() { 
    int numar; 
    cout<<"numar="; 
    cin>>numar; 

    int numar_nou, p = 1; 

    while(numar != 0) { 
        int n_cifra = numar % 10;
        if(n_cifra % 2 == 1) { 
            n_cifra = n_cifra;
        } 

    } 
    cout<<numar_nou; 
    return 0;
}