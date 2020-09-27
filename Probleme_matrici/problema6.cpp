//Sa se determine cate elemente minime si cate elemente maxime sunt in matrice
#include <iostream>
using namespace std;

int main() {
    int max_counter = 0;
    int min_counter = 0;
    int n, m;
    cout<<"n=";
    cin>>n;
    cout<<"m=";
    cin>>m;
    int mat[n][m];

    //citirea matrici
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout<<"mat["<<i<<"]["<<j<<"]=";
            cin>>mat[i][j];
        }
    }

    int max_elem = mat[0][0];
    int min_elem = mat[0][0];

    //aflarea elementului maxim si minim din matrice
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(mat[i][j] > max_elem) {
                max_elem = mat[i][j];
            } else if (mat[i][j] < min_elem) {
                min_elem = mat[i][j];
            }
        }
    }

    //cate elemente minime si maxime sunt in matrice
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(mat[i][j] == max_elem) {
                max_counter++;
            } else if(mat[i][j] == min_elem) {
                min_counter++;
            }
        }
    }

    cout<<endl;
    cout<<"Elementul maxim:"<<max_elem<<"\n Elementul minim: "<<min_elem<<endl;
    cout<<"Numarul elementelor maxime: "<<max_counter<<"\n Numarul elementelor minime: "<<min_counter<<endl;
    return 0;
}