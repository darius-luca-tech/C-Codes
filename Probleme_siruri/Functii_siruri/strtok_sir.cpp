#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cout<<endl;
    char sir[100] = "ana are mere,";
    char delim[] = " ,;";
    char *token;


    token = strtok(sir, delim);
    while(token) {
        cout<<token<<" "<<*token<<endl;
        token = strtok(NULL, delim);
    }

    cout<<endl;
    return 0;
}