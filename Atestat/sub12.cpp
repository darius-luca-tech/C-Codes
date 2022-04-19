#include <iostream>
using namespace std;

int main() {
    int n, aux;
    cin>>n;
    int vI[n], vS[n];

    for(int i = 0; i < n; ++i) {
        cin>>vI[i];
        vS[i] = vI[i];
    }

    for(int i = 0; i < n - 1;++i) {
        for(int j = i + 1; j < n; ++j) {
            if(vI[i] > vI[j]) {
                aux = vI[i];
                vI[i] = vI[j];
                vI[j] = aux;
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        cout<<vI[i]<<" ";
    }

    cout<<endl;
    for(int i = 0; i < n; ++i) {
        cout<<vS[i]<<" ";
    }
    
    return 0;

}