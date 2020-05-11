#include <iostream>
#include <math.h>
using namespace std;


int main() {
  int n;
  cout<<"n=";
  cin>>n;

  int suma = 0;

  for(int i = 2; i <= 17; i++) {
    if(log10(i) + 1 > 1) {
      while(i > 0) {
        suma += i % 10;
        i /= 10;
      }
      if (suma  % 2 == 1) {
        cout<<i<<" ";
      }
      suma = 0;
  } else {
    suma += suma + i;
    if (suma  % 2 == 1) {
      cout<<i<<" ";
    }
    suma = 0;
  }
}
  cout<<endl;
  return 0;
}
