/*
Într-un text cu cel mult 100 de caractere, cuvintele sunt formate din litere mici ale alfabetului englez și
sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat și afișează pe ecran numărul de cuvinte ale sale formate dintr-un număr egal de vocale și
consoane. Se consideră vocale literele din mulțimea a, e, i, o, u.
*/

#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char str[101];
    cin.get(str, 100);
    char delim[] = " .;";
    char voc[] = "aeiou";

    char *p;
    int vocale = 0;
    int consoane = 0;
    int cuv = 0;
    p = strtok(str, delim);

    while(p) {
        for(int i = 0; i < strlen(p); ++i) {
            if(strchr(voc, p[i]))
                vocale++;
            else 
                consoane++;
        }
        // cout<<p<<" "<<vocale<<" "<<consoane<<endl;
        if(vocale == consoane) 
            cuv++;

        p = strtok(NULL, delim);
        vocale = 0;
        consoane = 0;
    }   

    cout<<cuv<<endl;
    return 0;
}