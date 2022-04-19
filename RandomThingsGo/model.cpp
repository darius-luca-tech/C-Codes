#include <iostream> 
using namespace std; 

int main() { 
    int A; 
    cout<<"A="; 
    cin>>A; 

    int B; 
    cout<<"B="; 
    cin>>B; 

    for(int i = 1; i <= A; i++) { 
        for(int j = 1; j <= B; j++) { 
            if(i == 1 || i == A || j == 1 || j == B) { 
                cout<<"* ";
            } else { 
                cout<<"  ";
            } 
        } 
        cout<<endl;
    } 
    return 0;
}