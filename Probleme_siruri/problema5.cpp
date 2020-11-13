#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "LuCaCRIsteA";
    char *pStr = str;
    char *pDest = pStr;

    while(*pStr) {
        if(isupper(*pStr))
            *pDest++ = *pStr;
            // cout<<"1"<<endl;
        pStr++;
    }
    *pDest = '\0';

    cout<<str<<endl;
    return 0;
}