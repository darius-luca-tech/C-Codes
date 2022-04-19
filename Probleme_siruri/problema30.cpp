#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int j = 0;
    char s[101], s1[101], *p;
    cin.getline(s, 100);
    p = strtok(s, " ");

    while(p) {
        if(p[0] != '-') {
            strcat(s1, p);
            strcat(s1, " ");
        }
        p = strtok(NULL, " ");
    }

    strcpy(s, s1);
    cout<<s;
    return 0;
}