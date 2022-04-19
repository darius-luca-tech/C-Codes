#include <iostream>
using namespace std;

int main(){

    int n, k;
    cin>>n;
    int v[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>v[i][j];
        }
    }

    cin>>k;
    for(int i = 0; i < n; i++){
        for(int j = n; j >= k ;--j){
            v[i][j]=v[i][j-1];
        }
        v[i][k]=0;
    }

    cout<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
        
    return 0;
}

