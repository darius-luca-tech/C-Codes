/*
    Intreg n, x, y;
    Citeste n;

    x <- (n DIV 10.000) + x * 10;
    x <- (n DIV 1000) MOD 10 + x * 10;
    x <- (n DIV 10) MOD 10 + x * 10;
    x <- (n MOD 10) + x * 10;

    y <- (n / 1000) % 10 + y * 10;
    y <- (n / 100) % 10 + y * 10;
    y <- (n / 10) % 10 + y * 10;

    scrie x, y


*/


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[200], x[20], delim[] = " ;", *p = nullptr;
    cin.getline(s, 200);
    cin>>x;
    p = strtok(s, delim);

    while(p) {
        if(strcmp(x, p) == 0) {
            p = strtok(NULL, delim);
            cout<<p<<" ";
        }
        p = strtok(NULL, delim);
    }
    
    return 0;
}


















































