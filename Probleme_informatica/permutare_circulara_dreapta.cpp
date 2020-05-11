#include <iostream> 
using namespace std; 

int main() { 
    int vector[101]; 
    int n; 
    cout<<"n="; 
    cin>>n; 

    int aux; 

    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    } 
    // aplicam inversul algoritmului de la permutarea circulara stanga
    aux = vector[n- 1]; 
    for(int i = n - 1; i >= 0; i--) { 
        vector[i] = vector[i - 1];
    }   
    vector[0] = aux; 

    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="<<vector[i]<<endl;
    }
    
    return 0;
}