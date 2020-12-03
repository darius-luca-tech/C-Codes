#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char b[9] = "abbaabaa";
    char *p1;

    p1 = strrchr(b, 'b');
    cout<<"Valoriile pointerului:"<<p1<<" "<<*p1<<endl;
    cout<<"Indicele caracterului gasit:"<<p1-b<<endl; 

    return 0;
}