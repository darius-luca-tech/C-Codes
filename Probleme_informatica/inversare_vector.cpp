#include <iostream> 
using namespace std; 

int main() { 
    int vector[101]; 
    int n; 
    cout<<"Cate numere doriti sa cititi:"; 
    cin>>n; 
    int x; 

    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    } 

    for(int i = 0; i < n / 2; i++) { 
        x = vector[i]; 
        vector[i] = vector[n-i-1]; 
        vector[n-i-1] = x;
    } 

    cout<<endl; 

    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="<<vector[i]<<endl;
    } 
    cout<<endl; 

    return 0;
    
}