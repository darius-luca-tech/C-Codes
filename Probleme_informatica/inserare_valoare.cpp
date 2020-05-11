#include <iostream> 
using namespace std; 

int main() { 
    int vector[101]; 
    int n; 
    cout<<"n=";
    cin>>n; 

    int k; 
    cout<<"k(pozitia)="; 
    cin>>k; 

    int x; 
    cout<<"valoare="; 
    cin>>x; 
    
    cout<<endl;
    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i]; 
    }
  
    n++;
    for(int i = n; i > k; i--) { 
        vector[i] = vector[i - 1]; 
        //cout<<vector[i]<<" "<<vector[i- 1]<<endl;
    } 
    vector[k] = x;
 
    cout<<endl;
    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="<<vector[i]<<endl;
    } 
    return 0;
}