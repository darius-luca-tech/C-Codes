#include <iostream> 
using namespace std; 

int main() { 
    int n; 
    cout<<"n="; 
    cin>>n; 

    int vector[20][20]; 

    for(int i = 0 ; i < n; i++) { 
        for(int j = 0; j < n; j++) { 
            vector[i][j] = i + 1;
        } 
        cout<<endl;
    } 

    for(int i = 0 ; i < n; i++) { 
        for(int j = 0; j < n; j++) { 
            cout<<vector[i][j]<<" ";
        } 
        cout<<endl;
    }
}