#include <iostream> 
using namespace std; 

int main() { 
    int randuri;  
    int spatiu_intre_randuri;
    cout<<"Randuri:"; 
    cin>>randuri; 

    for (int i = 1, k = 0; i <= randuri; ++i, k = 0) { 
        for(spatiu_intre_randuri = 1; spatiu_intre_randuri <=randuri - i; ++spatiu_intre_randuri) { 
            cout<<"  "; 
        } 
        while (k != 2 * i - 1) { 
            cout<<"* "; 
            ++k; 
        } 
        cout<<endl;
    }

    return 0;
}