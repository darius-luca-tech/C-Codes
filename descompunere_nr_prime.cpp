#include <iostream> 
using namespace std; 

int main() { 
    int d, n, p; 
    
    cout<<"n="; 
    cin>>n; 
    d = 5;
    while (n > 1) { 
        while (n % d == 0) { 
            p++; 
            n = n / d; 
        } 

        if (p > 0)  
            cout<<d<<"^"<<p<<endl; 

        d = d + 1;
    } 
    return 0;
}