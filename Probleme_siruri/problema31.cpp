#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101], *p = nullptr, delim[] = " ";
    int voc = 0, con = 0;
    bool ok = false;
    cin.getline(s, 101);
    p = strtok(s, delim);


    while(p) {
        for(int i = 0; i < strlen(p); ++i) {
            if(strchr("aeiou", p[i])) {
                voc++;
            } else {
                con++;
            }
        }

        if(voc < con) {
            cout<<p<<endl;
            ok = true;
        } 

        p = strtok(NULL, delim);
        voc = 0;
        con = 0;
    }

    if(!ok) {
        cout<<"nu exista";
    }

    return 0;

}