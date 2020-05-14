#include <iostream>
using namespace std;

int main() {
  int r;
  cout<<"r(randuri)=";
  cin>>r;
  int c;
  cout<<"c(coloane)=";
  cin>>c;
  int v[r][c];

  float suma = 0;
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      cout<<"v["<<i<<"]["<<j<<"]=";
      cin>>v[i][j];
      suma += v[i][j];
    }
  }
  // cout<<"gata"<<endl;
  int maxim = v[0][0];
  int minim = v[0][0];
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      if(v[i][j] > maxim) {
        maxim = v[i][j];
      } else if (v[i][j] < minim){
        minim = v[i][j];
      }
    }
  }
  cout<<endl;
  cout<<"asta este matricea"<<endl;
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<endl;
  cout<<"Elementul maxim al matricei:"<<maxim<<endl;
  cout<<"Elementul minim al matricei:"<<minim<<endl;
  cout<<"Suma elementelor matricei:"<<suma<<endl;
  cout<<"Media aritmetica a elementelor:"<<suma/(r * c)<<endl;
  return 0;
}
