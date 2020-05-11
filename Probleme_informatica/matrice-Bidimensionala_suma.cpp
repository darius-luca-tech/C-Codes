#include <iostream> 
using namespace std; 

int main() { 
    int vector[101][101]; 
    int suma_v[20]; 

    int randuri; 
    cout<<"randuri:"; 
    cin>>randuri; 

    int coloane; 
    cout<<"coloane:"; 
    cin>>coloane; 

    int counter_rand = 0; 
    int suma = 0; 

    int n_randuri = randuri; 
    cout<<endl; 

    for(int i = 0;i < randuri; i++) { 
        for(int j = 0; j < coloane; j++) { 
            cout<<"vector["<<i<<"]["<<j<<"]="; 
            cin>>vector[i][j];
        }
        cout<<endl;
    } 

    for (int i = 0; i < randuri; i++) { 
        for (int j = 0; j < coloane; j++) { 
            cout<<vector[i][j]<<" ";
            counter_rand++; 
            if(counter_rand == coloane) { 
                cout<<endl;
            }
        } 
        counter_rand = 0;
    }   
    
    cout<<endl;
    for(int i = 0; i < randuri; i++) { 
        for(int j = 0; j < coloane; j++) { 
            suma = suma + vector[i][j]; 
            if(j == coloane - 1) { 
                suma_v[i] = suma;
            }
        } 
        suma = 0;
    }

    for(int i = 0; i < n_randuri; i++) { 
        cout<<"Suma liniei:"<<i<<" "<<"este:"<<suma_v[i]<<endl;
    }

    cout<<endl;
    return 0;
}