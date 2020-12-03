#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char s[20] = "abracadrabra";
    char a[] = "bra";
    char b[] = "xyz";

    char *p;
    p = strstr(s, a);
    while(p) {
        strncpy(p, b, strlen(b));
        p = strstr(p, a);
    }

    cout<<s<<endl;
    return 0;
}