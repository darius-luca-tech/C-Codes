#include <iostream>
#include <cstring>
using namespace std;

void numar(char *s) {
    for(int i = 0; i < strlen(s); ++i) {
        if(isdigit(s[i])) {
            cout<<s[i];
        }
    }
} 

int main() {
    char s[251], t[251];
    cin>>s>>t;
    numar(s);
    numar(t);

    return 0;
}