#include <iostream> 
using namespace std; 

int main() { 
    int n, x; 
    cout<<"n="; 
    cin>>n; 

    for(int i = (-n + 1); i <= n; i++) {  
        x = n - abs(i); 
        for(int j = x; j < n; j++) { 
            cout<<"#";
        } 
        for(int j = 1; j <= x; j++) { 
            cout<<"x";
        } 
        cout<<endl;
    } 
    cout<<endl;
}