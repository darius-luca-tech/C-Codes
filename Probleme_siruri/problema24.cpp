#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100];
    cin.getline(a, 100);

    if(isupper(a[0]))
        cout<<a[0];

    for(int i = 1; i < strlen(a) - 1; ++i) {
        if(a[i-1] == ' ' and isupper(a[i]))
            cout<<a[i];
    } 

    return 0;
}