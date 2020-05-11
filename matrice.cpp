#include <iostream> 
using namespace std; 

int main() { 
    int n, i, j; 
    float arr[20][20]; 
    cout<<"n="; 
    cin>>n; 

    for(i = 0;i < n;i++) {
        for (j = 0; j < n; j++) { 
            cout<<"a["<<i<<"]["<<j<<"]="; 
            cin>>arr[i][j]; 
        }
    }
    cout<<"Matrice initiala:"<<endl; 
    for(i = 0;i < n; i++) { 
        for(j = 0; j < n; j++) { 
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    } 
    for (i = 0 ; i < n; i++) { 
        arr[i][i] = 1;
    } 
    for(i = 0; i < n; i++) { 
        arr[i][n - i - 1] = 0;
    }
    cout<<endl<<"Matrice modificata:"<<endl;  
    for(i = 0;i<n;i++){   
        for(j = 0; j < n; j++) { 
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    } 
    return 0;
}