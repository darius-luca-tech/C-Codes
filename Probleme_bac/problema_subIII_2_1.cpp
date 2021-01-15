/*
Într-un text cu cel mult 10 2 caractere, cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
precizat, pe care îl transformă în memorie, eliminând numai ultima vocală care apare în text, ca în
exemplu. Programul afișează pe ecran textul obținut sau mesajul nu exista, dacă în text nu există
nicio vocală. Se consideră vocale literele a, e, i, o, u.
Exemplu: dacă se citește textul: cuvantul ritm poate fi tradus rhythm
se obține textul cuvantul ritm poate fi trads rhythm
*/

#include <iostream>
#include <cstring>
using namespace std;

char *strrev(char *str) {
    char *p1, *p2;

    if( ! str || ! *str)
        return str;
    
    for(p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }

    return str;
}

int main() {
    char str[101];
    cin.get(str, 100);
    char vocale[] = "aeiou";
    strrev(str);
    bool smecher = false;

    for(int i = 0; i < strlen(str) - 1; i++) {
        if(strchr(vocale, str[i])) {
            strcpy(str + i, str+i+1);
            smecher = true;
            break;
        }
    }

    strrev(str);
    if (smecher) 
        cout<<str<<endl;
    else
        cout<<"nu merge"<<endl;
    
    return 0;
}