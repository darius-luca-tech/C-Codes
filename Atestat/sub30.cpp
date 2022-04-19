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
    for(int j = 0; j < n; j++){
        for(int i = n;i >=k - 1; i--){
            v[i][j]=v[i-1][j];
        }
        v[k-1][j]=12;
    }

    cout<<endl;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
        
    return 0;
}