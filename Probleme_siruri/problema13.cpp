#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char a[] = "xyzaeiou";
    char s[20];
    for(int i = 0; i < strlen(a); i++) {
        if(strchr("aeiou", a[i]) != NULL) {
            strcpy(a+i, a+i+1);
            i--;
        } 
    }
    cout<<a<<endl;
    return 0;
}