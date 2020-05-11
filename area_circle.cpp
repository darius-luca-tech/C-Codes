#include <iostream> 
using namespace std; 

int main() { 
    const int pi = 3.14; 
    int r; 
    cout<<"raza:"<<endl; 
    cin>>r; 
    int area = pi * r * r; 
    int perimeter = 2 * pi * r;  
    cout<<perimeter<<endl; 
    cout<<area<<endl; 

}