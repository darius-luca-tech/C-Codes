#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char str[15];
    cin>>str;
    char *p;
    p = str;
    
    cout<<endl<<"Valoare pointer:"<<p<<" "<<*p<<" "<<&p<<endl;
    while(*(p) != '\0') {
        cout<<*p<<endl;
        *p++;
    }

    p -= strlen(str);
    cout<<endl<<"Valoare pointer:"<<p<<" "<<*p<<" "<<&p<<endl;
    
    cout<<strlen("abc")<<endl;
    return 0;
}