#include <iostream>
#include <algorithm>
using namespace std;

    int n, vector[107];
int main() {
    int suma = 0;
    cin>>n;
    for(int i = 1; i <= n; ++i) {
        cin>>vector[i];
    }

    sort(vector, vector + n + 1);
    int i, j;
    for(i = 1, j = n ; i < j ; j--) {
        suma += vector[j];
        while(suma - vector[i] > 0) {
            suma -= vector[i];
            ++i;
        }
    }

    if(i == j) {
        cout<<vector[j] + 1<<endl;
    } else if(vector[1] == vector[n]) {
        cout<<vector[i]<<endl;
    } else {
        cout<<vector[i]<<endl;
    }
}