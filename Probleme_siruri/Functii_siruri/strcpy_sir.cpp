#include <iostream>
#include <cstring>
using namespace std;

char* strcpy_custom(char *sursa, char *dest) { //varianta din libraria cstring nu imi place findca are parametri pusi in oridinea 
                                            // inversa copierii, si uneori ma mai induce in eroare 
    if(dest == NULL) // in caz ca nu e memorie alocata
        return NULL;

    char *p = dest; //creez pointer pentru sirul final
    while(*sursa != '\0') {
        *dest = *sursa;
        *dest++; //incrementare pointer pentru viitoarea copiere
        *sursa++;//incrementare pointer pentru viitoarea copiere
    }

    // cout<<*p<<" "<<p<<endl;
    *dest = '\0'; //la finalul sirului rezultant, adaugam caracter null
    // cout<<*p<<" "<<p<<endl;
    return p;
}

int main() {
    cout<<"Functia strcpy(cstring.h:)"<<endl;
    char str1[] = "cuvant";
    char str2[50];
    strcpy(str2, str1);
    cout<<"str1:"<<str1<<endl;
    cout<<"str2:"<<str2<<endl<<endl;;


    cout<<"Functia strcpy(custom):"<<endl;
    char str3[] = "informatica";
    strcpy_custom(str3, str2);
    cout<<"str1:"<<str1<<endl;
    cout<<"str2:"<<str2<<endl;
 
    return 0;
}