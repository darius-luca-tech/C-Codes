#include <iostream> 
using namespace std; 

int main() { 
    //Despre vector
    int vector[101]; 
    int n; 
    cout<<"n="; 
    cin>>n;  

    //Variabile auxiliare 
    //exista un element cel putin un element egal cu x aflat pe pozitiile impare ale tabloului sau mesaj NU  

    int x; 
    cout<<"x="; 
    cin>>x; 

    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    } 

    for(int i = 0; i < n; i++) { 
        if(i % 2 == 1 && vector[i] == x) { 
            cout<<"DA"<<endl; 
            break;
        } else { 
            cout<<"NU"<<endl;
        }
    }
}