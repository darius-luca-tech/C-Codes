#include <iostream>
#include <cstring>
using namespace std;

char* strcat_custom(char *s1, char *s2) {
    char *rez = s1;
    while(*(s1) != '\0') {
        *s1++;
    }

    while(*(s2) != '\0') {
        *s1 = *s2;
        *s1++;
        *s2++;
    }

    *s1 = '\0';
    return rez;
}

int main() {
    cout<<"Functia strcat(cstring.h)"<<endl;
    char sir1[] = "Luca";
    char sir2[] = " Cristea";

    strcat(sir1, sir2);
    cout<<sir1<<endl;

    cout<<"Functia strcat(custom):"<<endl;
    char sir3[] = "Darius";
    char sir4[] = " Cristea";
    strcat_custom(sir3, sir4);
    cout<<sir3<<endl;

    return 0;

}