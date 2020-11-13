#include <iostream>
using namespace std;

// int count_min;

// void citire(int x[], int n) {
//     for(int i = 0; i < n; ++i) {
//         cin>>x[i];
//     }
// }

// void afisare(int x[], int n) {
//     for(int i = 0; i < n; ++i) {
//         cout<<x[i]<<" ";
//     }
//     cout<<endl;
// }

// void verificare_min(int x[], int n) {
//     int minim = x[0];
//     for(int i = 0; i < n; ++i) {
//         if(x[i] < minim)
//             minim = x[i];
        
//         if(minim == x[i])
//             count_min++;
//     }

//     cout<<"numarul minim este:"<<minim<<" si numarul de aparitii a elementului minim este:"<<count_min<<endl;
// }

int palindrom(int x) {
    int ogl = 0;
    int copie = x;
    while(x) {
        ogl = ogl * 10 + x % 10;
        x = x / 10;
    }

    if(copie == ogl)
        return 1;
    else
        return 0;
    
}


int main() {
    
    int numar;
    int n;
    cin>>n;

    for(int i = 1; i <= n; ++i) {
        cin>>numar;
        cout<<palindrom(numar)<<endl;
    
    }



}