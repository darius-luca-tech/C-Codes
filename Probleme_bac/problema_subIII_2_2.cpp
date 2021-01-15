#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[101];
    int l = strlen(str);
    cin.get(str ,101);

    for(int i = 0; i < strlen(str) + 1; i++) {
        if(str[i] == '-')
            strcpy(str+i, str+i+1);
        cout<<str[i];
    }

    return 0;
}