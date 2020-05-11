#include <iostream> 
using namespace std; 

int main() { 
    int a, b; 
    cout<<"Valorea lui a si a lui b:"<<endl; 
    cin>>a>>b; 

    int sum = 0; 
    sum = a + b; 
    cout<<"Suma este:"<<sum<<endl;
    int mod; 
    cin>>mod;  

    int rezultatul_final = 0;  
    rezultatul_final = sum % mod; 

    cout<<"Rezultatul final:"<<rezultatul_final<<endl; 

    return 0;
}