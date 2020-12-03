#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char s[100];
    cout<<"Cuvant:";
    cin>>s;
    char *_p;
    _p = s;

    int i = 0;
    int j = strlen(_p) - 1;
    cout<<"Sirul "<<s<<" are "<<strlen(_p)<<" caractere"<<endl;
    // cout<<j<<endl;

    int contor = 0;
    while(i < j) {
        if(*(_p + i) == *(_p + j)) 
            contor++;
        
        i++;
        j--;
    }

    if(contor == strlen(s) / 2) {
        cout<<"Sirul "<<_p<<" este palindrom"<<endl;
    } else {
        cout<<"Sirul "<<_p<<" NU este palindrom"<<endl;
    }

    return 0;
}