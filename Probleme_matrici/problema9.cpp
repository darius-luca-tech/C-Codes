//In algoritm se aplica o conditie i ==j , adica verificam daca indicele coloanei
//este egal cu cel al liniei(diagonala principala).In caz ca conditia este adevarata , respectivul element va avea valoarea egala cu suma 
//celor 2 indici, altfel va avea valoarea 0

#include <iostream>
using namespace std;

int main() {
    int a[3][4];
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 4; ++j) {
            if(i == j) 
                a[i][j] = i + j;
            else
                a[i][j] = 0;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
    /*
        0 0 0 0 
        0 2 0 0
        0 0 4 0
    */
}