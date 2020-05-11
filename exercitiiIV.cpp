#include <iostream> 
using namespace std;  

int binCoeff(int n, int k) { 
    if (k == 0 || k == n) {
        return 1; 
    } 
    return binCoeff(n - 1, k - 1) + binCoeff(n - 1, k); 
}

int main() { 
    /* 
    c(5, 2)  = C(4, 1) = C(3, 0) + C(3, 1) 
    C(n, k) = C(n - 1, k -1) + C(n - 1, k) 

    */ 
    int n; 
    cin>>n; 
    int k; 
    cin>>k; 
    cout<<binCoeff(n, k)<<endl; 
    return 0;
} 

