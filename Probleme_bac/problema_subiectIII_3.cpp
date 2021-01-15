/*
Se citește de la tastatură un număr natural x (x≤10 9 ), valoare a unui termen al șirului dat, şi se cere să
se scrie în fişierul text bac.txt, în ordine descrescătoare, separați prin câte un spațiu, toţi termenii
şirului care sunt mai mici sau egali cu x. Proiectați un algoritm eficient din punctul de vedere al
memoriei utilizate şi al timpului de executare.


*/

#include <iostream>
#include <fstream>
using namespace std;

fstream fout("bac.txt", ios::out);

int main() {
    // int n;
    // cin>>n;
    // fout<<n<<" ";
    // while(n) {
    //     if(n < 11) {
    //         n= n - 1;
    //         fout<<n<<" ";
    //     } else if(n % 2 == 1) {
    //         n -= 1;
    //         fout<<n<<" ";
    //     } else if(n % 2 == 0) {
    //         n /= 2;
    //         fout<<n<<" ";
    //     }
    // }

    // int n = 12345;
    // int p = 1;
    // int m = 0;
    // int k = 0;
    // int i;
    // int c;
    // int x;
    // while(n) {
    //     fout>>x;
    //     i = k;
    //     while(i != 0) {
    //         x = x/ 10;
    //         i--;
    //     }

    //     if (x == 0) {
    //         c = n % 10;
    //     } else {
    //         c = x % 10;
    //     }

    //     m = c*p+m;
    //     n = n / 10;
    //     p = p * 10;
    //     k++;

    // }

    // cout<<m<<endl;

    int n;
    cin>>n;

    if(n <= 3) {
        return 1;
    }
    
    while(n) {
        if(n <= 2) {
            fout<<n<<" ";
            n--;
        } else {
            fout<<n<<" ";
            n /= 2;
        }
    }

    fout.close();
    return 0;
}