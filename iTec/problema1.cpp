#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

int main()
{
    char s[51];

    cout<<"sirul: ";
    cin.getline(s,51);
    int i = 0;
    while(i < strlen(s)) {
        if(!((s[i] >= 'A' and s[i] <= 'Z') || (s[i] >= 'a' and s[i] <= 'z'))) {
            strcpy(s+i, s+i+1);
        } else {
            i++;
        }
    }
    cout<<s<<endl;
    return 0;
}