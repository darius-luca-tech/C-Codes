#include <iostream>
using namespace std;

int main() {
    int v[] = {9, 8, 7, 6, 5, 4, 3};
    int aux;
    for(int i=0;i<7;i++) {
        if ((v[i+1]>v[i])||(v[i+1]==v[i])) {
            aux=v[i+1];
            v[i+1]=v[i];
            v[i]=aux;
        }
    }

    for(int i = 0; i < 7; ++i) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}