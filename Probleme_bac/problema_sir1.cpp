/*
Intr-un text cu cel mult 10 2 caractere, cuvintele sunt formate din litere mici și mari ale alfabetului englez
și sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de
tipul precizat, pe care îl transformă, astfel încât fiecare cuvânt sa aibă prima literă mare, și toate
celelalte litere mici. Textul obținut se afişează pe ecran.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100] = "ABIA aSTept sa Merg lA scoala";
    char *p;
    char delim[5] = " .,;";

    p = strtok(str, delim);
    while(p) {
        for(int j = 0; j < strlen(p); ++j) {
            if(islower(p[0]))
                p[0] -= 32;
            else if(j != 0 and isupper(p[j]))
                p[j] += 32;
        }
        cout<<p<<endl;
        p = strtok(NULL, delim);
    }
    // cout<<str<<endl;
    return 0;
}