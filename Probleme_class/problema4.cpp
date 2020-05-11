#include <iostream> 
using namespace std; 

int main() {
    int vector[101]; 
    int n; 
    cout<<"n="; 
    cin>>n; 

    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    } 

    for(int i = 0; i < n; i++) { 
        if(vector[i] % 2 == 0) { 
            cout<<"Element:"<<vector[i]<<", pozitie:"<<i<<endl;
        }
    } 

    return 0;
}