#include <iostream>
#include <cstring>
using namespace std;

bool cautare_matrice(char a[][50], char cuvant[20]) {
    for(int i = 0; i < 10; ++i) {
        if(strcmp(a[i], cuvant) == 0)
            return true;
    }
    return false;
}

int main() {
    const int col = 50;
    int n;
    cout<<"n=";
    cin>>n;
    char sir[n][col];
    char sir_final[n][col];
    bool check = false;
    int contor = 0;

    for(int i = 1; i <= n; ++i) {
        cout<<"cuvant:";
        cin>>sir[i];
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 2; j <= n; ++j) {
            if(!cautare_matrice(sir_final, sir[i]) and !cautare_matrice(sir_final, sir[j]) and strcmp(sir[i], sir[j]) != 0) {
                strcpy(sir_final[contor], sir[i]);
                contor++;
                strcpy(sir_final[contor], sir[j]);
                contor++;
                cout<<sir[i]<<" "<<sir[j]<<endl;
                check = true;
            }
        }
    }

    if(check == false)
        cout<<"FARA SOLUTIE"<<endl;

    return 0;
}