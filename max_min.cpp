#include <iostream> 
using namespace std; 

int f(int n) { 
    int f3 = 1; 
    while(n != 0) { 
        f3 = f3 * n; 
        n = n - 1; 
        cout<<f3<<endl;
    } 
    return f3;
}  
int main() { 
    int n = 12; 
    cout<<f(n)<<endl; 
    return 0;
    
} 
