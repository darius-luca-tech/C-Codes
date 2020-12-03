#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char a[] = "abbabbaceisdau";

    for(int i = 0; i < strlen(a); i++) {             
        if(strchr("aeiou", a[i])) {
            cout<<a[i]<<"-"<<i<<endl;
        }

    }
}

/*
    char c1[] = "tata";
    char c2[] = "tafa";

    int res = strcmp(c1, c2);
    cout<<res<<endl;



*/