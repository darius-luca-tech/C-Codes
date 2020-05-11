#include <iostream> 
using namespace std; 

int main() { 
    int vector[101]; 
    int n; 
    cout<<"n="; 
    cin>>n; 

    int a, b;
    cout<<"a si b:"<<endl;
    cin>>a>>b; 

    int contor = 0;

    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i]; 
    } 

    for(int i = 0; i < n; i++) { 
        if(vector[i] >= a and vector[i] <= b) { 
            contor++;
        }
    } 
    
    cout<<"Numarul elementelor care fac parte din intervalul:["<<a<<", "<<b<<"] este de:"<<contor<<endl; 
    return 0; 
}