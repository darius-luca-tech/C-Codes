#include <iostream> 
using namespace std; 

int main() { 
    int A[20][20]; 

    int n; 
    cout<<"n-"; 
    cin>>n; 


    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < n; j++) { 
            if(i==0 || j==0 || j==n-1 ){
                A[i][j]=1;
            }
            else{
                A[i][j]=A[i-1][j-1]+A[i-1][j]+A[i-1][j+1];
            }
            cout<<A[i][j]<<" ";
            
        } 
        cout<<endl;
    } 

    cout<<endl; 
    return 0; 
}