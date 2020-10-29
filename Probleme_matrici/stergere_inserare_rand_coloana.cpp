#include <iostream>
#include <stdlib.h>
using namespace std;

int linie, coloana, optiune, r, c, i, j, mat[30][30];

void citire_matrice() {
    cout<<"linii:";
    cin>>r;
    cout<<"coloane:";
    cin>>c;

    for(i = 0; i < r; ++i) {
        for(j = 0; j < c; ++j) {
            cout<<"m["<<i<<"]["<<j<<"]=";
            cin>>mat[i][j];
        }
    }
    system("clear");
}

void afisare_matrice(int &r, int &c) {
    for(i = 0; i < r; ++i) {
        for(j = 0; j < c; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    cout<<"1) Stergere linie"<<endl;
    cout<<"2) Stergere coloana"<<endl;
    cout<<"3) Adaugare linie"<<endl;
    cout<<"4) Adaugare coloana"<<endl;
    cin>>optiune;
    system("clear");

    citire_matrice();
    cout<<endl<<"Aceasta este matricea:"<<endl;
    afisare_matrice(r, c);

    switch(optiune) {
        case 1:
            cout<<"Ati ales varianta 1 - stergere a unei linii"<<endl;
            cout<<"Precizati linia:";
            cin>>linie;

            while(linie >= r) {
                cout<<"Numar invalid:";
                cin>>linie;
            }
            system("clear");
            for(i = linie; i < r; ++i) {
                for(j = 0; j < c; ++j) {
                    mat[i][j] = mat[i + 1][j];
                }
            }

            cout<<endl<<"Dupa stergerea liniei "<<linie<<" ,matricea arata asa:"<<endl;
            r--;
            afisare_matrice(r, c);

            cout<<"Dimensiunea actuala a matricii:"<<r <<" * "<<c<<endl;
            break;
        
        case 2:
            cout<<"Ati ales varianta 2 - stergerea unei coloane"<<endl;
            cout<<"Precizati coloana:";
            cin>>coloana;

            while(coloana >= c) {
                cout<<"Numar invalid:";
                cin>>coloana;
            }
            system("clear");

            for(i = 0; i < r; ++i) {
                for(j = coloana; j < c; ++j) {
                    mat[i][j] = mat[i][j + 1];
                }
            }

            cout<<endl<<"Dupa stergerea liniei "<<coloana<<" ,matricea arata asa:"<<endl;
            c--;
            afisare_matrice(r, c);
            cout<<"Actual a dimensiune:"<<r <<" * "<<c<<endl;
            break;
        
        case 3:
            cout<<endl<<"Ati ales varianta 3 - adaugarea unei linii"<<endl;
            cout<<"Precizati pozitia:";
            cin>>linie;
            
            while(linie > r + 1) {
                cout<<"Numar invalid:";
                cin>>linie;
            }

            for(j = 0; j < c; ++j) {
                for(i = r; i >= linie; --i) {
                    mat[i][j] = mat[i - 1][j];                    
                }
                mat[linie][j] = 0;
            }

            r++;
            cout<<endl<<"Dupa adaugarea liniei "<<linie<<" matricea arata asa:"<<endl;
            afisare_matrice(r, c);
            cout<<"Dimensiunea matricii :"<<r<<" * "<<c<<endl;
            break;

        case 4:
            cout<<endl<<"Ati ales varianta 4 - adaugarea unei coloane"<<endl;
            cout<<"Precizati pozitia:";
            cin>>coloana;

            while(coloana > c + 1) {
                cout<<"Numar invalid:";
                cin>>coloana;
            }

            for(i = 0; i < r; ++i) {
                for(j = c; j >= coloana; --j) {
                    mat[i][j] = mat[i][j - 1];
                }
                mat[i][coloana] = 0;
            }

            c++;
            cout<<endl<<"Dupa adaugarea liniei "<<coloana<<" matricea arata asa:"<<endl;
            afisare_matrice(r, c);
            cout<<"Dimensiunea matricii: "<<r<<" * "<<c<<endl;
            break;
    }   


    return 0;
}