#include <iostream>
#include <cstring>
using namespace std;


int vfA[26], vfa[26], fmax, i;
char s[101];
int main() {
    cin.get(s, 101);
    for(i = 0; i < strlen(s); ++i) {
        if(s[i] != ' ') {
            if(s[i] >= 'a' && s[i] <= 'z') {
                vfa[s[i] - 'a']++;
            } else {
                vfA[s[i] - 'A']++;
            }
        }
    }

    for(i = 0; i < 26; ++i) {
        if(vfa[i] > fmax) fmax = vfa[i];
        if(vfA[i] > fmax) fmax = vfA[i];
    }

    for(i = 0; i < 26; ++i) {
        if(vfa[i] == fmax) cout<<(char) (i + 'a')<<" ";
        if(vfA[i] == fmax) cout<<(char) (i + 'A')<<" ";
    }

    cout<<fmax;
    return 0;

}