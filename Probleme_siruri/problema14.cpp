#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[255];
    cin.get(a, 40);
    cout<<a<<endl;
    char delim[] = " ,;.";
    char *p;

    a[0] = a[0] - 32;
    for(int i = 0; i < strlen(a); i++) {
        if(a[i] != ' ' and a[i - 1] == ' ')
            a[i] -= 32;
    }
    cout<<a<<endl;
    return 0;
}