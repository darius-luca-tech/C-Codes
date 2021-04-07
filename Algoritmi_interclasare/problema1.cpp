#include <iostream>
#include <fstream>
using namespace std;

void interclasare(int n, int A[], int m, int B[], int & k, int C[]) {
   int i = 0, j = 0;
   k = 0;

   while(i <= n && j <= m)
      if(A[i] < B[j])
         C[++k] = A[i++];
      else
         C[++k] = B[j++];

   while(i <= n)
      C[++k] = A[i++];

   while(j <= m)
      C[++k] = B[j++];
}

fstream fin("in.txt", ios::in);
int n, m, k;


int main() {
    fin>>n>>m;
    int b[n], f[m];

    for(int i = 0; i < n; ++i) {
        fin>>b[i];
    }

    for(int i = 0; i < m; ++i) {
        fin>>f[i];
    }

    int C[2 * n];

    interclasare(n, b, m, f, k, C);
    for(int i = 0; i < 2 * n - 1; ++i) {
        cout<<C[i]<<" ";
    }

    cout<<endl;


    return 0;

}
