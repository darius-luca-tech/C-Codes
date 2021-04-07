#include <iostream>
using namespace std;
const int DMAX = 101;

int n, x[DMAX], m, y[DMAX];

void citire(int & n, int A[])
{
   cin >> n;
   for(int i = 1; i <= n; i++)
      cin >> A[i];
}

bool CautareBinara(int n, int x[], int val)
{
   int st = 1, dr = n, mij;
   while(st <= dr)
   {
      mij = (st+dr)/2;
      if(x[mij] == val)
         return true;
      else if(x[mij] < val)
         st = mij+1;
      else
         dr = mij-1;
   }
   return false;
}

void parcurgere(int n, int x[], int m, int y[])
{
   for(int i = 1; i <= m; i++)
      cout << CautareBinara(n, x, y[i]) << '\n';
}

int main()
{
   citire(n, x);
   citire(m, y);
   parcurgere(n, x, m, y);
   return 0;
}