#include <iostream> 
using namespace std; 

int main() { 
    int vector[101]; 
    int n; 
    cout<<"cate numere doriti sa cititi:"; 
    cin>>n; 

    //citim vectorul
    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    } 
    //atribui elementul cu pozitia 0 la variabilele maxim si minim
    int maxim = vector[0]; 
    int minim = vector[0]; 

    for(int i = 1; i < n; i++) { 
        if(maxim < vector[i]) { 
            maxim = vector[i];
        } else if (minim > vector[i]) { 
            minim = vector[i];
        }
    } 

    cout<<"Elementul maxim al vectorului este:"<<maxim<<" "<<"si elementul minim al vectorului este:"<<minim<<endl;
    return 0;
}