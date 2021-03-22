#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

fstream fin("in.txt", ios::in);
fstream fout("out.txt", ios::out);

int main() {
    int n;
    fin>>n;
    char prim[30], ultim[30], aux[30];
    fin>>aux;
    strcpy(prim, aux);
    strcpy(ultim, aux);

    for(int i = 1; i < n; ++i) {
        fin>>aux;

        if(strcmp(aux, prim) < 0) {
            strcpy(prim, aux);
        }

        if(strcmp(aux, ultim) > 0) {
            strcpy(ultim, aux);
        }
    }

    cout<<prim<<" "<<ultim<<endl;
    return 0;
}


