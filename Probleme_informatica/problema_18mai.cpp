#include <iostream>
using namespace std;

int main() {
  int matrice[101][101];
  int n;
  cout<<"n(linii = coloane)=";
  cin>>n;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout<<"m["<<i<<"]["<<j<<"]=";
      cin>>matrice[i][j];
    }
  }
  cout<<endl;
  cout<<"Aceasta este matricea:"<<endl;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout<<matrice[i][j]<<" ";
    }
    cout<<endl;
  }

  int maxim = matrice[0][0];
  int minim = matrice[0][0];

  for(int i = 0; i < n; i++) {
    if(maxim < matrice[i][i]) maxim = matrice[i][i];
    if(minim > matrice[i][i]) minim = matrice[i][i];
  }

  cout<<"Elementul maxim al diagonalei principale este:"<<maxim<<endl;
  cout<<"Elementul minim al diagonalei principale este:"<<minim<<endl;
  cout<<endl;

  maxim = matrice[0][n-1];
  minim = matrice[0][n-1];

  for(int i = 0; i < n; i++) {
    if(maxim < matrice[i][n - 1 - i]) maxim = matrice[i][n - 1 - i];
    if(minim > matrice[i][n - 1 - i]) minim = matrice[i][n - 1 - i];
  }

  cout<<"Elementul maxim al diagonalei secundare este:"<<maxim<<endl;
  cout<<"Elementul minim al diagonalei secundare este:"<<minim<<endl;

  return 0;

}
