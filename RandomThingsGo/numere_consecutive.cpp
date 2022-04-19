#include <iostream> 
using namespace std; 

int main() { 
    int a, b; 
    cout<<"a="<<endl;  
    cin>>a; 
    cout<<"b="<<endl; 
    cin>>b; 

    if (a > b) {
        if (a == b + 1) { 
            cout<<"Numerele"<<" "<<a<<" si"<<" "<<b<<" sunt consecutive"<<endl;
        } else { 
            cout<<"Numerele nu sunt consecutive!"<<endl;
        }
        
    } else if (a < b) { 
        if (b == a + 1) { 
            cout<<"Numerele"<<" "<<b<<" si"<<" "<<a<<" sunt consecutive"<<endl;
        } else { 
            cout<<"Numerele nu sunt consecutive!"<<endl;
        }    
    }
    
    return 0;
}