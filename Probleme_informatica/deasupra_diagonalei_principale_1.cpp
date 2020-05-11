#include <iostream> 
using namespace std; 

int main() { 
    int matrice[101][101]; 
    int n = 3; 
    cout<<"Spune-mi ce vrei sa afli dintr-o matrice patratica, vei avea niste optiuni mai jos:"<<endl; 
    cout<<"1) Diagonala principala"<<endl; 
    cout<<"2) Diagonala secundara"<<endl; 
    cout<<"3) Deasupra diagonalei principale"<<endl; 
    cout<<"4) Sub diagonala principala"<<endl; 
    cout<<"5) Deasupra diagonalei secundare"<<endl; 
    cout<<"6) Sub diagonala secundara"<<endl; 
    int raspuns; 
    cin>>raspuns; 

    while (raspuns < 1 or raspuns > 9) { }
    for(int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            cout<<"matrice["<<i<<"]["<<j<<"]="; 
            cin>>matrice[i][j];
        } 
    }  
    cout<<endl;
    for(int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            cout<<matrice[i][j]<<" ";
        }  
        cout<<endl;
    }


    cout<<endl;
    for(int i = 0; i < n; i++) { 
        for (int j = 0 ; j < n; j++) { 
            /*  
            if(i == j) { 
                cout<<matrice[i][j]<<"--diagonala principala"<<endl;
            } else if (i + j == n + 1) { 
                cout<<matrice[i][j]<<"--diagonala secundare"<<endl;
            } else if (i < j) { 
                cout<<matrice[i][j]<<"--deasupra diagonalei principale"<<endl;
            } else if (i > j) { 
                cout<<matrice[i][j]<<"--sub diagonaala principala"<<endl;
            } else if (i + j < n + 1) { 
                cout<<matrice[i][j]<<"--deasupra diagonalei secundare"<<endl;
            } else if (i + j > n + 1) { 
                cout<<matrice[i][j]<<"--sub diagonala secundara"<<endl;
            } 
            */ 
            if(i == j) { 
               cout<<matrice[i][j]<<"--face parte diagonala principala"<<endl;
            } 
            /*
            if(i + j == n + 1) { 
               cout<<matrice[i][j]<<"--face parte din diagonala secundara"<<endl;
            } 
            */ 
           

        } 
    } 
    cout<<endl;
    return 0;
}