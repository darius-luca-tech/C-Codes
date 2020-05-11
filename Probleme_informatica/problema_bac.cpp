#include <iostream> 
using namespace std; 

int main()  { 
    int A[20][20];
    int n; 
    cout<<"n(randuri)="; 
    cin>>n; 

    int m; 
    cout<<"m(coloane)="; 
    cin>>m; 

    for(int i = 1; i <= n; i++) { 
        for(int j = 1; j<=m ; j++) { 
            if(i < j) { 
                A[i][j] = i;
            } else { 
                A[i][j] = j;
            }
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    } 

   
   
    return 0;
}