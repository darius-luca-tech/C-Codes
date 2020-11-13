#include <iostream>
#include <cstring>
using namespace std;

//POINTERI = VIATA
/*
    strlen(const char *) -  numara cate caractere are sirul s

*/
int custom_strlen(char *s) {
    int count = 0;
    while(*(s) != '\0') {
        count++;
        *s++;
    }

    return count;
}

void afisare_sir(char *s) {
    while(*(s) != '\0') {
        cout<<*s;
        *s++;
    }
    cout<<endl;
}

int main() {
    char str[] = "cuvant";
    cout<<"Lungimea sirului:"<<strlen(str)<<endl;
    cout<<"Lungimea sirului(custom):"<<custom_strlen(str)<<endl;
    afisare_sir(str);
    return 0;
}