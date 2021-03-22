#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[51], aux[51];
    char unu[] = "unu";
    char doi[] = "doi";
    cout<<"Text:";
    cin>>text;

    for(int i = 0; i < strlen(text); ++i) {
        if(text[i] == '1') {
            strcpy(aux, text+i+1);
            strcpy(text+i+1, unu);
            strcat(text, aux);
        } 
        
        if(text[i] == '2') {
            strcpy(aux, text+i+1);
            strcpy(text+i+1, doi);
            strcat(text, aux);
        }

        cout<<text<<endl;
    }

    cout<<text;
    cout<<aux;
    return 0;
}
