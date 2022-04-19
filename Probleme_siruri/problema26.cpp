#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}


int main() {
    char sir[101], *p, cs[110];
    cin.get(sir, 101);
    strcpy(cs, sir);
    int maxSir = 0;

    p = strtok(sir, "#");
    while(p != NULL) {
        if(strlen(p) > maxSir) maxSir = strlen(p);
        p = strtok(NULL, "#");
    }

    p = strtok(cs, "#");

    while(p != NULL) {
        if(strlen(p) == maxSir) strrev(p);
        cout<<"#"<<p;
        p = strtok(NULL, "#");
    }
    cout<<"#";

    return 0;
}