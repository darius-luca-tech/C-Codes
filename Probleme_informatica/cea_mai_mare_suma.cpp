#include <iostream> 
#include <bits/stdc++.h> 
#include <math.h>
using namespace std; 

int main() {
    int n;  
    cout<<"n="; 
    cin>>n;
    int copie = n; 

    int maxim, suma = 0; 
    int minim = n % 10;
    while(n) { 
        if(n % 10 < minim) { 
            minim = n % 10;
        }  
        n = n / 10;
    }  
/*
    while(copie){  
        if(copie % 10 == maxim) { 
            copie = copie / 10;
        }
        suma = suma + copie % 10; 
        copie = copie / 10;
    } 
*/  
    cout<<int(log10(copie) + 1)<<endl;
    cout<<endl;
    cout<<minim<<endl; 
    return 0;
}