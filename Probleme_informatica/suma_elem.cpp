#include <iostream> 
using namespace std; 

int main() { 
    int vector[101]; 
    int suma = 0; 
    
    int n; 
    int a; 
    cout<<"Cate numere vreti sa cititi:"<<endl; 
    cin>>n; 

    //citim vectorul 
    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    }  
    //adunam fiecare element din vector cu variabila suma
    for(int i = 0; i < n; i++) { 
        suma = suma + vector[i];
    }
    cout<<"Suma elementelor:"<<suma<<endl; 
    return 0;
}