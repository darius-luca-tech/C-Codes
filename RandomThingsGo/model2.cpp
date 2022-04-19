#include <iostream> 
using namespace std; 

int main() { 
    int n; 
    cout<<"(impar)n="; 
    cin>>n; 

    for(int randuri = 1; randuri <= n; randuri++) { 
        for(int coloane = 1; coloane <= n; coloane++) { 
            if(randuri == 1 || randuri == n || coloane == 1 || coloane == n || randuri == n / 2 + 1) { 
                cout<<"* "; 
            } else if (n % 2 == 1 && coloane == n / 2 + 1) { 
                cout<<"* "; 
            } else if (n % 2 == 0 && coloane == n / 2) { 
                cout<<" *"; 
            } else { 
                cout<<"  ";
            }
        } 
        cout<<endl;
    } 
    return 0;
}