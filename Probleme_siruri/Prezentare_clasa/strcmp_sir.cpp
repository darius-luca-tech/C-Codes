#include <iostream>
#include <cstring>
using namespace std;

//m-109;a-97;n-110;

int main() {
    char a[] = "Popa"; 
    char b[] = "Vali";
    int res = strcmp(a, b);
    // cout<<res<<endl;

    if(res > 0) {
        cout<<a<<" este mai mare decat "<<b<<endl;
    } else if (res < 0) {
        cout<<a<<" este mai mic decat "<<b<<endl;
    } else {
        cout<<a<<" si "<<b<<" sunt egale"<<endl;
    }

    return 0;
}