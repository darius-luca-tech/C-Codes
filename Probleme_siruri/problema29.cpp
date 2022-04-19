#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int pos[11];
    char s[21];
    cin.get(s, 20);
    char voc[11] = "aeiouAEIOU";

    for(int i = 0; i < 10; ++i) {
        if(strchr(s, voc[i]) == 0) {
            cout<<voc[i];
        }
    }

    return 0;
}