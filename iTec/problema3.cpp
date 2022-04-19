//explicatie: pentru a forma acest numar, trebuie sa luam o cifra din unul, cand din altul, mai exact prima 
//pentru a lua prima cifra, am intors cele doua numere(din 2345, am facut 5432) pentru a-mi fi mai usor prelucrarea cifrei
//mai apoi, am aplicat algoritmul de construire a numarului
//mai exista o varianta pentru preluarea primei cifre cu (x / 1000) % 10 dar nu imi vine momentan cum sa scand din numitor(gen de la 1000 la 100, de la 100 la 10 samd) <- asta e un pic mai eficienta

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x, y;
    int z = 0;
    int i = 0;
    int cifra;
    cin>>x>>y;
    int new_x = 0, new_y = 0;

    while(x != 0) {
        cifra = x % 10;
        x = x / 10;
        new_x = new_x * 10 + cifra;
    }

    while(y != 0) {
        cifra = y % 10;
        new_y = new_y * 10 + cifra;
        y = y / 10;
    }

    cout<<new_x<<" "<<new_y<<endl;
    while(new_x != 0 or new_y != 0) {
        if(i % 2 == 0) {
            cifra = new_x % 10;
            z = z * 10 + cifra;
            new_x = new_x / 10;
        } else {
            cifra = new_y % 10;
            z = z * 10 + cifra;
            new_y = new_y / 10;
        }
        i++;
    }

    cout<<z<<endl;
    return 0;
}
