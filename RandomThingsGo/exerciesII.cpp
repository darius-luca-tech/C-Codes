#include <iostream> 
using namespace std; 

int main() {   
    int A;  
    cin>>A;

    int B; 
    cin>>B;

    int C; 
    cin>>C;

    int sum = 0;
    int counters = 0;

    for (int a = A; a<= B; a++) {  
        if (a % C == 0) { 
            counters++; 
            sum = sum + a; 
            cout<<a<<" ";
            
        }   
    } 
    cout<<sum<<endl; 
    cout<<counters<<endl;
     

    return 0;

}  

