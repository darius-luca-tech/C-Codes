#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);
void display(int nr_vec, int *p) {
    for(int i = 0; i < nr_vec; ++i) {
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
}

int main() {
    int nr_vec, n, i=0, aux;
    fin>>nr_vec;
    int *p = (int *)malloc(nr_vec * sizeof(int));

    while(fin>>n) {
        *(p+i) = n;
        ++i;
    }
    display(nr_vec, p);

    aux = *(p + 0);
    for(i = 0; i < nr_vec / 2 - 1; ++i) { //permutare la stanga
        *(p + i) = *(p + i + 1);
    }
    *(p+n-1) = aux;
    display(nr_vec, p);

    aux = *(p+n-1);
    for(i = nr_vec / 2 - 2; i >= 0 ; --i) {
        *(p+i) = *(p+i-1);
    }
    *p = aux;
    display(nr_vec, p);

    free(p);
    p = nullptr;
    return 0;
}