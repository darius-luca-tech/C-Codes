#include <iostream> 
using namespace std; 

int main() { 
    int vector[101]; 

    int n; 
    cout<<"n="; 
    cin>>n; 

    int prima_pozitie, ultima_pozitiie; 
    cout<<"scrieti doua numere mai mici ca n:"; 
    cin>>prima_pozitie>>ultima_pozitiie; 

    int suma = 0;
    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    }  

    for(int i = prima_pozitie; prima_pozitie <= ultima_pozitiie; prima_pozitie++) { 
        suma = suma + vector[prima_pozitie];
    } 

    cout<<"Suma elementelor de la pozitia:"<<prima_pozitie<<" "<<"pana la pozitia:"<<ultima_pozitiie<<" "<<"este:"<<suma<<endl;  
    return 0;

}