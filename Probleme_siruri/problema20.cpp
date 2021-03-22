#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char text[201];
    char delim[] = " .,?!";
    char vocale[] = "aeiou";
    char *p = nullptr;
    cin.get(text, 200);

    p = strtok(text, delim);
    while(p) {
        // cout<<p<<endl;
        if((strchr(vocale, p[0]) != NULL) and (strchr(vocale, p[strlen(p) - 1]) != NULL)) {
            cout<<p<<" ";
        }
        p = strtok(NULL, delim);
    }

    return 0;
}