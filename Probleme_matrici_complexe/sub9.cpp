#include <iostream>
using namespace std;

int main() {
    int n, M, max = INT64_MIN, min = INT64_MAX, aux, newMaxI, newMaxJ, newMinI, newMinJ;
    cin>>n>>M;
    int m[n][M];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < M; ++j) {
            cin>>m[i][j];
        }
    }

    cout<<endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < M; ++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }    

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < M; ++j) {
            if(m[i][j] > max) {
                max = m[i][j];
                newMaxI = i;
                newMaxJ = j;
            } else if(m[i][j] < min) {
                min = m[i][j];
                newMinI = i;
                newMinJ = j;
            }
        }
    }

    aux = m[newMaxI][newMaxJ];
    m[newMaxI][newMaxJ] = m[newMinI][newMinJ];
    m[newMinI][newMinJ] = aux;

    cout<<endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < M; ++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}