#include <iostream>
using namespace std;

int main() {
    int v101];
    int n;
    cout<<"cate elemente vreti sa cititi:";
    cin>>n;


    for(int i = 0; i < n; i++) {
        cout<<"vector["<<i<<"]=";
        cin>>v[i];
    }

    int aux = vector[0];
    for(int i = 0 ; i < n; i++) {
        v[i] = v[i + 1];
    }
    v[n - 1] = aux;

    cout<<endl;
    for(int i = 0; i < n; i++) {
        cout<<"vector["<<i<<"]="<<v[i]<<endl;
    }
    cout<<endl;
    return 0;

}
