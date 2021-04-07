#include <iostream>
using namespace std;
const int DMAX = 101;

int n, v[DMAX];

int main()
{
   cin >> n;
   for(int i = 1; i <= n; i++)
      cin >> v[i];

   int k;
   for(int i = 1; i < n; i++)
      if(v[i] > v[i+1])
         k = i;

   cout << k;
   return 0;
}