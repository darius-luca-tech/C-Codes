#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);

void display(int *v, int n) {
    for(int i = 0; i < n; ++i) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    //x - marimea vectorului
    //nr - un element din vector
    int x, i = 0, nr, aux;
    fin>>x;
    int v[x];

    while(fin>>nr) {
        v[i] = nr;
        ++i;
    }

    cout<<v[x / 2]<<endl;
    display(v, x);

    aux = v[0];
    for(int i = 0; i < x / 2; ++i) {
        v[i] = v[i + 1];
    }
    v[x / 2] = aux;

    display(v, x);

    aux = v[x - 1];
    for(int i = x - 1; i >= x / 2; --i) {
        v[i] = v[i - 1];
    }
    v[x / 2] = aux;

    display(v, x);



    return 0;
}