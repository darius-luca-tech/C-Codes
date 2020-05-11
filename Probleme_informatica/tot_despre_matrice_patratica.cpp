#include <iostream> 
using namespace std;
//documentatie:https://www.pbinfo.ro/articole/5626/tablouri-patratice
int main() {

    cout<<endl;
    int matrice[101][101]; 
    int n; 
 
    cout<<"1) Diagonala principala"<<endl; 
    cout<<"2) Diagonala secundara"<<endl; 
    cout<<"3) Deasupra diagonalei principale"<<endl; 
    cout<<"4) Sub diagonala principala"<<endl; 
    cout<<"5) Deasupra diagonalei secundare"<<endl; 
    cout<<"6) Sub diagonala secundara"<<endl;  
    cout<<"Spune-mi ce vrei sa afli dintr-o matrice patratica, vei avea niste optiuni mai sus:"<<endl;
    int raspuns; 
    cin>>raspuns; 

    while (raspuns < 1 or raspuns > 9) { 
        cout<<"Raspuns invalid"<<endl; 
        cin>>raspuns; 
    } 

    cout<<"Inainte declarati matricea(neaparat patratica):"; 
    cin>>n; 
    cout<<endl;

    for(int i = 0; i < n; i++) { 
        for(int j = 0;j < n; j++) { 
            cout<<"matrice["<<i<<"]["<<j<<"]="; 
            cin>>matrice[i][j];
        }
    } 

    cout<<endl;
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < n; j++) { 
            cout<<matrice[i][j]<<" ";
        } 
        cout<<endl;
    }

    cout<<endl;
    switch (raspuns) {   
        case 1: 
            for(int i = 0; i < n; i++) { 
                cout<<matrice[i][i]<<" ";
            } 
            cout<<"--elementele diagonalei principale"<<endl;
            break;
        
        case 2: 
            for(int i = 0; i < n; i++) {
                cout<<matrice[i][n - i -1]<<" ";
            } 
            cout<<"--elementele diagonalei secundare"<<endl; 
            break; 
        
        case 3: 
            for(int i = 0; i < n ; i++) { 
                for(int j = 0; j < n; j++) { 
                    if(i < j) { 
                        cout<<matrice[i][j]<<" ";
                    }
                } 
            } 
            cout<<"--elementele care se afla deasupra diagonalei principalei"<<endl; 
            break; 
        case 4: 
            for(int i = 0; i < n ; i++) { 
                for(int j = 0; j < n; j++) { 
                    if(i > j) { 
                        cout<<matrice[i][j]<<" ";
                    }
                } 
            }  
            cout<<"--elementele care se afla sub diagonala principala"<<endl; 
            break;
        case 5: 
            for(int i = 0; i < n ; i++) { 
                for(int j = 0; j < n; j++) { 
                    if(i + j < n - 1) { 
                        cout<<matrice[i][j]<<" ";
                    }
                } 
            } 
            cout<<"--elementele care se afla deasupra diagonalei secundare"<<endl; 
            break;
        case 6: 
            for(int i = 0; i < n ; i++) { 
                for(int j = n-i-2; j < n; j++) { 
                    if(i + j > n - 1) { 
                        cout<<matrice[i][j]<<" ";
                    }
                } 
            } 
            cout<<"--elementele care se afla sub diagonala secundara"<<endl; 
            break; 
    } 
    return 0; 
} 
