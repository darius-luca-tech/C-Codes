#include <iostream> 
using namespace std; 

int main() {  
    int v[101]; 
    int n; 
    cout<<"n="; 
    cin>>n; 

    int nr = 0;
    int x;
    cout<<"x="; 
    cin>>x;

    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>v[i];
    }     

    for(int i = 0; i < n; i++) { 
        if (v[i] % x == 0) { 
            nr++;
        }
    } 

    cout<<endl;
    cout<<"Numarul elementelor divizibile cu"<<" "<<x<<" "<<"este de:"<<nr<<endl; 
    return 0;
}