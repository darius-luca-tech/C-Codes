#include <iostream>
using namespace std;

void f (int x){ 
    cout<<"*";
    if(x>0)
    { cout<<x; 
    f(x/100);
    }
    cout<<"/"; 
}

int main() {
    f(54321);
    return 0;
}

/*
    struct chestii {
        int v[100];
        char nume[20];
        char colectie[20];
    } m;


*/