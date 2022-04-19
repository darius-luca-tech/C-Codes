#include<iostream> 
using namespace std; 

int main() { 
    double suma_datorata = 0.0, bancnota_500 = 0.0, bancnota_200 = 0.0, bancnota_100 = 0.0, bancnota_50 = 0.0, bancnota_10 = 0.0, bancnota_5 = 0.0, bancnota_1 = 0.0, rest = 0.0 , bani_50 = 0.0, bani_10 = 0.0, bani_5 = 0.0, bani_1 = 0.0, suma_totala = 0.0; 

    while (suma_datorata == 0.0) { 
        cout<<"Suma platita este de:"; 
        cin>>suma_datorata; 
        cout<<"Suma este:"<<suma_datorata<<endl; 
    }  

    do {

        cout<<"Va rugam, platiti suma, introducand numarul bacnotelor"<<endl; 
        
        cout<<"Numarul bacnotelor de 500 lei:"<<endl;
        cin>>bancnota_500;  
        bancnota_500 *= 500.00;
        cout<<"Numarul bacnotelor de 200 lei:"<<endl;
        cin>>bancnota_200; 
        bancnota_200 *= 200.00; 
        cout<<"Numarul bacnotelor de 100 lei:"<<endl;
        cin>>bancnota_100;  
        bancnota_100 *= 100.00;
        cout<<"Numarul bacnotelor de 50 lei:"<<endl;
        cin>>bancnota_50;   
        bancnota_50 *= 50.00;
        cout<<"Numarul bacnotelor de 10 lei:"<<endl;
        cin>>bancnota_10;  
        bancnota_10 *= 10.00; 
        cout<<"Numarul bacnotelor de 5 lei:"<<endl;
        cin>>bancnota_5; 
        bancnota_5 *= 5.00;  
        cout<<"Numarul bacnotelor de 1 lei:"<<endl;
        cin>>bancnota_1; 
        bancnota_1 *= 1.00;  

        suma_totala =  bancnota_500 + bancnota_200 + bancnota_100 + bancnota_50 + bancnota_10 + bancnota_5 + bancnota_1; 
        if (suma_totala < 19) {  
            cout<<"Ati platit:"<<suma_totala<<" "<<"lei"<<endl;  
        } else { 
            cout<<"Ati platit:"<<suma_totala<<" "<<"de lei"<<endl;
        }

        if (suma_totala < suma_datorata) { 
            cout<<"Nu ati platit destul, mai aveti de platit:"<<suma_datorata - suma_totala<<" "<<"lei"<<endl;
        } 
        rest = suma_totala - suma_datorata;
 
    } while (rest<= 0);
    cout<<"Restul este de:"<<rest<<endl;

    bancnota_500 = 0; 
    bancnota_200 = 0; 
    bancnota_100 = 0; 
    bancnota_50 = 0; 
    bancnota_10 = 0; 
    bancnota_5 = 0; 
    bancnota_1 = 0; 

    while (rest >= 500) { 
        rest = rest - 500; 
        bancnota_500 += 1;
    } 
    while (rest >= 200) { 
        rest = rest - 200; 
        bancnota_200 += 1; 
    } 
    while (rest >= 100) { 
        rest = rest - 100; 
        bancnota_100 += 1;
    } 
    while (rest >= 50) { 
        rest = rest - 50; 
        bancnota_50 += 1; 
    } 

    while(rest >= 10) { 
        rest = rest - 10; 
        bancnota_10 += 1;
    } 

    while (rest >= 5) { 
        rest = rest - 5; 
        bancnota_5 += 1;
    } 
    while (rest >= 1) { 
        rest = rest - 1; 
        bancnota_1 += 1;
    } 
    while (rest >= .5) { 
        rest = rest - .5; 
        bani_50 += 1;
    } 
    while (rest >= .1) { 
        rest = rest - .1; 
        bani_10 += 1;
    } 
    while(rest > .05) { 
        rest = rest - .05; 
        bani_5 += 1;
    } 
    while(rest > .01) { 
        rest = rest - .01; 
        bani_1 += 1;
    } 

    if (bancnota_500 > 0) { 
        cout<<bancnota_500<<" "<<"de 500 de lei"<<endl;
    } 
    if (bancnota_200 > 0) { 
        cout<<bancnota_200<<" "<<"de 200 de lei"<<endl;
    } 
    if (bancnota_100 > 0) { 
        cout<<bancnota_100<<" "<<"de 100 de lei"<<endl;
    } 
    if (bancnota_50 > 0) { 
        cout<<bancnota_50<<" "<<"de 50 de lei"<<endl;
    }
    if (bancnota_10 > 0) { 
        cout<<bancnota_10<<" "<<"de 10 de lei"<<endl;
    }
    if (bancnota_5 > 0) { 
        cout<<bancnota_5<<" "<<"de 5 de lei"<<endl;
    }
    if (bancnota_1 > 0) { 
        cout<<bancnota_1<<" "<<"de 1 de lei"<<endl;
    } 
    if (bani_50 > 0) { 
        cout<<bani_50<<" "<<"de 50 de bani"<<endl;
    } 
    if (bani_10 > 0) { 
        cout<<bani_10<<" "<<"de 10 de bani"<<endl;
    } 
    if(bani_5 > 0) { 
        cout<<bani_5<<" "<<"de 5 de bani"<<endl;
    } 
    if(bani_1 > 0) { 
        cout<<bani_1<<" "<<"de 1 de bani"<<endl;
    }





}