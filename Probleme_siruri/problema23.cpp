#include <iostream>
#include <cstring>
using namespace std;


char s[256], t[256]="", voc[]="aeiou";
int i, p, j;
int main() {

    cin.getline(s,256);
    cin>>p;

    for(i = 0; i <= strlen(s) - p; ++i) {
        for(j = 0; j < strlen(s); ++j) {
            if(j >= i + p or j < i) 
                cout<<s[j];
        }
        cout<<endl;
    }


    return 0;
}