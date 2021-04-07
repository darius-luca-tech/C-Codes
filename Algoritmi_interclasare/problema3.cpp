#include <iostream>
using namespace std;
const int DMAX = 101;

int n, arr[DMAX];

void citire(int & n, int arr[])
{
   cin >> n;
   for(int i = 0; i < n; i++)
      cin >> arr[i];
}

void schimb(int & a, int & b)
{
   int aux = a;
   a = b;
   b = aux;
}

void sortareVal(int n, int arr[])
{
   for(int i = 0; i < n; i++)
      if(i % 2 == 0)
      {
         for(int j = i+1; j < n; j++)
            if(arr[i] < arr[j])
               schimb(arr[i], arr[j]);
      }
      else
      {
         for(int j = i+1; j < n; j++)
            if(arr[i] > arr[j])
               schimb(arr[i], arr[j]);
      }
}
int main()
{
   citire(n, arr);
   sortareVal(n, arr);

   for(int i = 0; i < n; i++)
      cout << arr[i] << ' ';

   return 0;
}