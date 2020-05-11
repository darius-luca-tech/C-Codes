#include <iostream>   
using namespace std; 

int main() { 
    int vector[101]; 

    int n; 
    cout<<"n="; 
    cin>>n; 

    int x; 
    cout<<"x="; 
    cin>>x; 

    int k = 0; 
    int aux; 

    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    }  
    for(int i = 0; i < n; i++) { 
        if(vector[i] == x) { 
            for(int j = i; j > 0; j--) { 
                aux = vector[j - 1]; 
                vector[j- 1] = vector[j]; 
                vector[j] = aux;
            }
        }

    } 

    for(int i = 0; i < n; i++) { 
        cout<<vector[i]<<" "; 
    } 

    return 0;
}

