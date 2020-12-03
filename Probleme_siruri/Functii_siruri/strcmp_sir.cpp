#include <iostream>
#include <cstring>
using namespace std;

//m - 109;a-97;n-110;

int main() {
    char a[] = "mama"; 
    char b[] = "mana";
    int res = strcmp(a, b);
    cout<<res<<endl;

    return 0;
}