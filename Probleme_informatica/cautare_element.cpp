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

    bool numar_gasit = false;
    int i = 0; 

    for(i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    } 

    i = 0;
    while((i < n) and numar_gasit == false) { 
        i++;
        if(vector[i] == x) { 
            numar_gasit = true; 
        } 

    }  


    cout<<"Elementul:"<<x<<" "<<"se afla pe pozitia:"<<i<<endl; 
    return 0;
}