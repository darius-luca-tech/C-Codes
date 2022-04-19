#include <iostream>
using namespace std;

int main() {
    int n; //marimea tabloului
    cin>>n;
    int a[n], b[n], c[n];

    for(int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    for(int i = 0; i < n; ++i) {
        cin>>b[i];
    }

    for(int i = 0; i < n; ++i) {
        if(a[i] == b[i]) {
            c[i] = a[i];
        } else {
            c[i] = 0;
        }
    }

    for(int i = 0; i < n; ++i) {
        cout<<c[i]<<" ";
    }

    cout<<endl;

    return 0;
}