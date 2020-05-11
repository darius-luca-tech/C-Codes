#include <iostream> 
using namespace std; 

int main() {    
    int vector[101]; 
    int n; 
    cout<<"n="; 
    cin>>n; 

    int suma = 0;
    for(int i =0 ; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    } 

    for(int i = 0; i < n; i++) { 
        if(i % 2 == 1 && vector[i] % 2 == 0) { 
            suma = suma + vector[i];
        }
    }  
    cout<<endl;
    cout<<suma<<endl; 
    return 0;
} 