#include <iostream>
#include <cstring>
using namespace std;


//char* strchr(const char *s, int c);
/*                  |            |
            sirul de caractere, caracter cautat

*/
int main() {
    char a[7] = "cuvant"; //sir
    char c = 'a'; //caracterul cautat
    char *p;

    p = strchr(a, c); //asociem pointerului , noul subsir care incepe cu caracterul cautat;
    // cout<<"Cuvantul:"<<a<<endl;
    // cout<<"Valoarea pointerului:"<<p<<" "<<*p<<endl;
    // cout<<"Indicele caracterului:"<<p-a<<endl; //cuvant - ant = 3;

    if(p) {
        cout<<"Caracter gasit!"<<endl;
    } else {
        cout<<"404"<<endl;
    }

    return 0;
}