#include <iostream> 
using namespace std; 

int main() { 
    
    int n; 
    cout<<"Numar:"<<endl; 
    cin>>n; 

    int rev = 0;
    while (n != 0) { 
        rev = (rev * 10) + n%10; 
        n = n / 10; 
    } 

    cout<<"rev este:"<<rev<<endl;  
    //cout<<(b
    //+++++bool(n == rev))<<endl;
    if (n == rev) { 
        cout<<"true"<<endl;
    }
    return 0;
}