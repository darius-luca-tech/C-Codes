/*
    In fisiserul sir.in pe prima linie se afla un text t avand cel mult 200 de caractere(litere sis spatii);
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

fstream fin("in.txt", ios::in);
fstream fout("out.txt", ios::out);

char t[201], c[20], aux[30];

void delete_word(char *cuvant) {
    for(int i = 0; i < strlen(cuvant); ++i) {
        strcpy(cuvant+i, cuvant+i+1);
    }

    cuvant = nullptr;
}


int main() {
    fin.getline(t, 200);
    fin>>c;

    char *p = nullptr;
    p = strtok(t, " .,;");
    while(p) {

        if(p[0] == c[0]) {
            cout<<p<<endl;
            delete_word(p);
        } else {
            fout<<p<<endl;
        }
        // cout<<p<<endl;
        p = strtok(NULL, " .,;");
    }

    return 0;
}