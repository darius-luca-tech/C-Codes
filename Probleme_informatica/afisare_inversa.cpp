#include <iostream> 
using namespace std; 

int main() { 
    int vector[101];  
    int n; 
    cout<<"cate numere doriti sa cititi:"; 
    cin>>n; 

    //citim vectorul
    for(int i = 0; i < n;i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i]; 
    }  
    //atribuim lui valoare lui n-1 pt ca de acolo sa inceapa scaderea si sa se termine cand ajunge la 0
    for(int i = n-1; i >= 0; i--) { 
        cout<<vector[i]<<",";
    } 
    cout<<endl;
    return 0;
}