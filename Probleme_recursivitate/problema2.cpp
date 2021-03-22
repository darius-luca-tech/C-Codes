#include <iostream>
using namespace std;


int v[10], n, x, mijloc, a, b;
int produs(int li, int ls, int x) {
    if(li == ls) {
        if(v[li] % 10 == x)
            return v[li];
        return 1;
       
    } else {
        mijloc=(li + ls) / 2;
        a = produs(li, mijloc, x);
        b = produs(mijloc+1, ls, x);
        return a * b;
    }
}

int cautare(int li, int ls) {
    if(li == ls) {
        if(v[li] == li) 
            return 1;
        else 
            return 0;

    } else {
        mijloc=(li + ls) / 2;
        a = cautare(li, mijloc);
        b = cautare(mijloc+1, ls);
        return a + b;
    }
}

int main() {
    cout<<"n=";
    cin>>n;
    
    
    for(int i = 0; i < n; ++i) {
        cin>>v[i];
    }

    cout<<cautare(0, n-1)<<endl;
    return 0;
}