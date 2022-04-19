#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int i;
    char s[101], aux[201];
    cin.get(s, 100);

    for(i = 0; i < strlen(s) - 1; ++i) {
        if(s[i] == s[i + 1]) {
            strcpy(aux, s + i + 1);
            s[i + 1] = '#';
            strcpy(s + i + 2, aux);
            // ++i;
        }
    }

    cout<<s<<endl;
    return 0;
}