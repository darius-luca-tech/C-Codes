#include <iostream> 
using namespace std; 

int main() { 
    int n,copie; 
    cout<<"n="; 
    cin>>n; 
    copie = n;
    
    for(int j = 0; j <= 9; j++) {  
        n = copie;
        int counter = 0;
        while(n != 0) { 
            if(n % 10 == j) { 
                counter++; 
            }  
            n = n / 10;
        } 
        if(counter == 0) { 
            cout<<"Cifra:"<<j<<" nu se gaseste in numarul dat"<<endl; 
        } else if(counter == 1) {      
            cout<<"Cifra:"<<j<<" se gaseste in numarul dat o singura data"<<endl;
        } else {
            cout<<"Cifra:"<<j<<" se gaseste in numarul dat de :"<<counter<<" ori"<<endl;
        } 
    } 
    return 0; 
} 
