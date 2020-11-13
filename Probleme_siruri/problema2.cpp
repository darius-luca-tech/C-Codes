#include <iostream>
using namespace std;


int main() {
    char *str = new char;
    cin>>str;

    while(*(str) != '\0') {
        cout<<*str;
        *str++;
    }
    cout<<endl;

    return 0;
}

