#include <iostream>
using namespace std;

// int Cifra(int n, int x=0) {
//     x = n % 10;
//     while(n) { 
//         if(n % 10 > x) { 
//             x = n % 10;
//         }
//         n /= 10;
//     }

//     return x;
// }

// int verif(int x) {
//     int nr, n;
//     for(int i = 0; i < 4; i++) { 
//         nr = 1;
//         for(int j = 0; j < i; j++) {
//             nr = nr * 10;
//         }
//         n = x / nr;
//         if((n%10)%2 == 1 and ((n/10)%10)%2 == 1 and ((n / 100)%10)%2 == 1) {
//             cout<<n%10<<" "<<(n/10)%10<<" "<<((n / 100)%10)<<endl;
//             return 1;
//         }
//     }

//     return 0;
// }

// int f(int n){
//     while(n){
//         int x = n%10, y = (n/10)%10, z = (n/100)%10;

//         if(x%2==1 && y%2==1 && z%2==1) {
//             cout<<x<<" "<<y<<" "<<z<<endl;
//             return 1;
//         }
//         n = n/10;
//    }
//    return 0;
// }

int v[100];

int numarare(int a) {
    int counter = 0;
    while(a) {
        counter++;
        a = a / 10;
    }

    return counter;
}

int inlocuire(int a, int b) {

    if(numarare(a) < b) 
        return 0;

    int k = 0;
    while(a) {
        v[++k] = a % 10;
        a /= 10;
    }

    cout<<"[INFO]: Numarul scris ca vector este:";
    for(int i = 1; i <= k; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    int j = k;
    int i = 1;
    while(i < j) {
        int swap = v[i];
        v[i] = v[j];
        v[j] = swap;
        i++;
        j--;
    }

    for(int j = b; j <= k; ++j) {
        v[j] = 0;
    }

    int numar_final = 0;
    i = 1;
    while(k) {
        numar_final = numar_final * 10 + v[i];
        k--;
        i++; 
    }

    return numar_final;

}

int main() {
    int n = 184465709;
    cout<<inlocuire(n, 5)<<endl;
    return 0;
}