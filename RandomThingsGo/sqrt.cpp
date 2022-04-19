#include <iostream>  
#include <math.h>
using namespace std; 

int main() { 
    int numarul_de_argumente_de_la_numitor; 
    cout<<"Cati radicali are la numitor?"; 
    cin>>numarul_de_argumente_de_la_numitor;    
    int ordin = 0; 
    do {
        cout<<"Ce ordin are radicalul"; 
        cin>>ordin;  
        if (ordin == 1 || ordin == 0) { 
            cout<<"!!!Ordin nedefinit!!!"<<endl;
        }
    } while (ordin == 1 || ordin == 0);

    if (numarul_de_argumente_de_la_numitor == 2) { 
        int a; 
        cout<<"Primul radical:"; 
        cin>>a; 

        int b; 
        cout<<"Al doilea radical:"; 
        cin>>b; 

        int numarator; 
        cout<<"Ce aveti la numarator:"<<endl;  
        cout<<"1.Operatie "<<endl;
        cout<<"2.Operatie cu necunoscuta"<<endl; 
        int raspuns; 
        cin>>raspuns; 

        switch (raspuns) { 

            case 1:

                int radical1; 
                cout<<"radical="; 
                cin>>radical1; 
                cout<<"Radicalul este:"<<sqrt(radical1)<<endl; 

                int radical2; 
                cout<<"radical="; 
                cin>>radical2;  
                cout<<"Radicalul este:"<<sqrt(radical2)<<endl; 

                cout<<"Intre radicali ce operatie este?"<<endl; 
                cout<<"1.Adunare"<<endl; 
                cout<<"2.Scadere"<<endl;
                cout<<"3.Inmultire"<<endl; 

                int raspuns;  
                cin>>raspuns;

                switch (raspuns) {
                    case 1:  
                        cout<<"Radicalul ramane la fel!"<<endl; 
                        cout<<"Numaratorul este:"<<sqrt(radical1)<<"+"<<sqrt(radical2)<<endl; 
                        break; 
                    case 2: 
                        cout<<"Radicalul ramane la fel!"<<endl; 
                        cout<<"Numaratorul este:"<<sqrt(radical1)<<"-"<<sqrt(radical2)<<endl; 
                        break;  
                    case 3:
                        cout<<"Numaratorul este:"<<sqrt(radical1) * sqrt(radical2)<<endl; 
                        break;
                    
                }   
                break;  
 /*           
            case 2:

                string necunoscuta; 
                cout<<"necunoscuta"; 
                cin>>necunoscuta; 

                cout<<"Necunoscuta la numitor:"<<endl;  

*/

        }


    } 
    return 0;
}