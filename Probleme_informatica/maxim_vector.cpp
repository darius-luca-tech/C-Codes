#include <iostream> 
using namespace std; 

int main() { 
    int vector[101]; 
    int n;
    cout<<"Cate numere vreti sa cititi:"; 
    cin>>n; 

    int maxim = 0; 

    //citim elementele vectorului de la tastatura
    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    }  

    //aflam maximul din sir 
    for(int i = 0; i < n; i++) { 
        if (maxim < vector[i]) { 
            maxim = vector[i];
        }
    } 

    cout<<"Elementul maxim din sir este:"<<maxim<<endl;;
    return 0;
}