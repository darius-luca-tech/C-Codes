#include <iostream>
using namespace std;

int main() {
  int m[4][5];
  for(int i = 0; i < 4; ++i) {
    for(int j = 0; j < 5; ++j) {
      m[i][j] = 0;
    }
  }

  for(int i = 0; i < 4; ++i) {
    for(int j = 0; j < 5  ; ++j) {
      m[i][j] = (5 - j) + 5 * i;
    }
  }
  for(int i = 0; i < 4; ++i) {
    for(int j = 0; j < 5; ++j) {
      cout<<m[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
