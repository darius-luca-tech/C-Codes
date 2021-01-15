/*
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din intervalul
[2,20], n și k, şi construieşte în memorie un tablou bidimensional cu n∙k linii şi n
coloane, numerotate începând cu 1, astfel încât fiecare coloană i (i∈[1,n]) memorează
un şir crescător de termeni cu proprietatea că primul termen este i, fiecare valoare apare
în şir de exact k ori și oricare doi termeni alăturați au valori egale sau consecutive.
Programul afişează pe ecran tabloul construit, fiecare linie a tabloului pe câte o linie a
ecranului, cu valorile aflate pe aceeaşi linie separate prin câte un spaţiu.
*/


#include <iostream>
using namespace std;


int main() {
    int n, k;
    cin>>n>>k;
    int mat[20][40];
    
    for(int i = 1; i <= k * n; ++i) {
        mat[1][i] = (i-1)/k+1;
        // cout<<mat[1][i]<<" ";
    }
    cout<<endl;

    for(int i = 2; i <=n; ++i) {
        for(int j = 1; j <= n*k; ++j) {
            mat[i][j] = mat[i-1][j]+1;
            // cout<<mat[i][j]<<" ";
        }
        // cout<<endl;
    }

    for(int j = 1; j <= n*k; ++j) {
        for(int i = 1; i <= n; ++i) {
         
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}