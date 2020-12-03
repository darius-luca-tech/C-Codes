#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sir[100] = "mama, tata si bunicul.";
    char delim[] = " .,;";
    char *token;

    int i = 0;
    token = strtok(sir, delim);
    while(token) {
        cout<<token<<endl;
        while(*token != '\0') {
            if(*(token) >= 'a' and *(token) <= 'z') {
                cout<<"Caracter gasit:"<<*token<<" ";
                cout<<"CHECKED"<<" "<<char(*(token) - 32)<<endl;
            }
            
            *token++;
        }
        cout<<endl;
        token = strtok(NULL, delim);
    }

    return 0;
}