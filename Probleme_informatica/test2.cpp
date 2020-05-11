#include <iostream> 
using namespace std; 

long f(long n) { 
    if(n == 4) {  
        return n; 
    } else { 
        if(n % 10 == 4 || n % 10 == 0) { 
            return n + f(n / 10);
        } else { 
            return n + f( n* 2);
        }
    }


}

int main() { 
    int x = 34; 
    cout<<f(x);  
    return 0; 
}