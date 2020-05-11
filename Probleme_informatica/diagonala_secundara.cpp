#include <iostream> 
using namespace std; 

int main() { 
    int suma = 0; 
    int a[5][5]; 
    int n = 3; 
    for(int i = 1; i <= 3; i++) { 
        for(int j = 1; j <= 3; j++) { 
            cout<<"a["<<i<<"]["<<j<<"]="; 
            cin>>a[i][j]; 
        }
    }
    for(int i = 1; i <= 3; i++) { 
        suma = suma + a[i][3 - i + 1];
    } 
    cout<<suma<<endl; 
    return 0;
}