#include <iostream>
#include <cstring>
using namespace std;

/*
    strchr - are rolul de a cauta caracterul c in sirul s
    Linia 16: Functia returneaza adresa subsirului care incepe cu prima aparitie a caracterului scris ca parametru.
    Linia 17:Am calculat indicele caracterului gasit facand diferenta dintre str si p: cuvant - ant = 3

*/

int strchr_custom(char *s, char c) {
    for(int i = 0; i < strlen(s); ++i) {
        if(*(s+i) == c) 
            cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}

int main() {
    char str[] = "ababab";
    char *p = str;
    cout<<p<<" "<<*p<<endl;
    p = strchr(str, 'a');
    cout<<"Pointer:"<<p<<" "<<*p<<endl; // p = ant, *p = a
    cout<<"Functie:"<<strchr(str, 'a')<<endl; // ant
    cout<<"Indicele:"<<p - str<<endl; // 3
    cout<<"Indicele (custom):"<<strchr_custom(str, 'a')<<endl;

    // cout<<p_str++<<" "<<*p_str<<endl;

    // strchr_custom(str, 'a');
    // strchr_custom(str, 'b');
    return 0;
}

