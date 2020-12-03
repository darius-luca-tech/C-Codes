#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sir[7] = "cuvant";
    char a[4] = "uva";
    char *p;

    p = strstr(sir, a);
    cout<<"Cuvant:"<<sir<<endl;
    cout<<"Valoarea pointerului:"<<p<<" "<<*p<<endl;
    cout<<"Indicele subsirului gasit:"<<p-sir<<endl;

    return 0;
}