#include <iostream> 
using namespace std; 

int main() { 
    int vector[101];

    int n; 
    cout<<"n="; 
    cin>>n;

    int k; 
    cout<<"k="; 
    cin>>k;  


    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    } 

    
    n--; 
    for(int i = k; i < n; i++) { 
        vector[i] = vector[i+1]; 
        //cout<<vector[i]<<" "<<vector[i+1];
    } 

    cout<<endl;
    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="<<vector[i]<<endl;
    } 

    return 0;
}