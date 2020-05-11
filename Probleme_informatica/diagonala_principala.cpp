#include <iostream> 
using namespace std; 

int main() { 
    int matrice[101][101]; 
    int n = 3;
    int suma = 0;
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < n; j++) { 
            cout<<"matrice["<<i<<"]["<<j<<"]="; 
            cin>>matrice[i][j];
        }
    } 


    for(int i = 0; i < n; i++) { 
        suma = suma + matrice[i][i];

    }   
    cout<<endl;
    cout<<suma<<endl;
    return 0;

}