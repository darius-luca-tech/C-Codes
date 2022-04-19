//citindu-se de la tastatura doua numere naturale formate din 3 cifre, formati un al treilea numar care sa contina din primul numar
//cifra unitatilor si a sutelor, iar din al doilea numar, cifra zecilor in aceasta ordine

//media aritmetica a cifrelor celor doua numere impreuna

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main(){
    // unsigned int a, b, c, medie = 0;
    // cin >> a >> b;

    // medie = (a / 100) + (a / 10) % 10 + (a % 10) + (b / 100) + (b / 10) % 10 + b % 10;
    // medie = medie / 6;

    // cout<<medie;

    int a[7][7];
    for(int i = 1; i <= 7; ++i) {
        for(int j = 1; j <= 7; ++j) {
            cin >> a[i][j]
        }
    }
    return 0;
}