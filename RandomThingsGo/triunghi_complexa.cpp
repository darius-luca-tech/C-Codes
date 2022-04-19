#include <iostream> 
using namespace std; 

int main() { 
    int p; 
    cout<<"Perimetrul triunghiului:"; 
    cin>>p; 

    int ab, bc ,ac; 
    int counter = 0;
    for(ab = 1; ab <= p; ab++) { 
        for(bc = 1; bc <= p; bc++) { 
            for(ac = 1; ac<= p; ac++) { 
                if((ab + bc >= ac && ab + ac >= bc && bc + ac >= ab) && (ab + bc + ac == p)) { 
                    cout<<"a="<<ab<<" "<<"b="<<bc<<" "<<"c="<<ac<<endl; 
                    counter++;
                }
            }
        }
    } 
    if(counter >= 20) { 
        cout<<"Cu perimetrul de"<<" "<<p<<" "<<", un triunghi poate avea"<<" "<<counter<<" "<<"de posibilitati"<<endl;
    } else { 
        cout<<"Cu perimetrul de"<<" "<<p<<" "<<", un triunghi poate avea"<<" "<<counter<<" "<<"posibilitati"<<endl;     
    }
    return 0; 
    
}