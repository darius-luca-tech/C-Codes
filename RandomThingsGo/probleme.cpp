#include <iostream> 
using namespace std; 

int main(){  
    int a[100],i,S=0,n;
    cout<<"nr de elemente= "; 
    
    cin>>n; 

    cout<<"introdu elementele:"<<endl;
    for(i=0;i<n;i++) {  
        cout<<"a["<<i<<"]="<<"\n"; 
        cin>>a[i];   
        cout<<endl;
    }
   
      
    for(i=0;i<n;i++) { 
        S+=a[i];
    }
    


    cout<<"vector= ";

    for(i=0;i<n;i++) {
        cout<<a[i]<<" "; 
    }
    cout<<endl;
    cout<<"Suma elementelor vectorului= "<<S<<"\n"; 
    cout<<"Iti urez ok , si sa ai o zi continuare!"<<endl; 

    return 0;
}