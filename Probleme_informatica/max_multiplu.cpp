#include <iostream> 
using namespace std; 

int main() { 
    int vector[101]; 
    int n; 
    cout<<"cate numere doriti sa cititi:"; 
    cin>>n; 

    int maxim= 0; 
    int nr_max = 0;  
    //citim sirul
    for(int i = 0; i < n; i++) { 
        cout<<"vector["<<i<<"]="; 
        cin>>vector[i];
    } 
    //aplicam acelasi algoritm ca si la aflarea elementului maxim din vector, dar daca elementul se repeta in vector, avem o variabile nr_max la care i se adauga +1
    for(int i = 0; i < n; i++) { 
        if (maxim < vector[i]) { 
            maxim = vector[i]; 
            nr_max = 0;
        } 

        if(maxim == vector[i]) { 
            nr_max++;
        }
    } 
    cout<<"Elementul maxim al sirului:"<<maxim<<" "<<"apare de:"<<nr_max<<" "<<"ori"<<endl; 
    return 0;
}