#include <iostream> 
using namespace std; 

int main() {  
    int vector[101]; 
    int n; 
    cout<<"n="; 
    cin>>n; 

    int suma_par = 0; 
    int suma_impar = 0;
    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    } 

    for(int i = 0; i < n; i++) { 
        if (i % 2 == 0) { 
            suma_par += vector[i];
        } else { 
            suma_impar += vector[i];
        }
    } 

    cout<<endl;
    cout<<"Suma elementelor aflate pe pozitii pare:"<<suma_par<<endl; 
    cout<<"Suma elementelor aflate pe pozitii impare:"<<suma_impar<<endl; 

    return 0;
}