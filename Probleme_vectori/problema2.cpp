#include <iostream>
#include <math.h>
using namespace std;

int vF[10];

int main() {
    int n;
    cout<<"n=";
    cin>>n;

    while(n) {
        vF[n % 10]++;
        n /= 10;
    }
    int a = 0; 
    int b = 0;

    for(int i = 9; i >= 0; --i) {
        if(vF[i] == 1)
            a = a * 10 + i;
    }

    for(int i = 9; i >= 0; --i) {
        if(vF[i] != 0)
            while(vF[i]) {
                b = b * 10 + i;
                vF[i]--;
            }
    }
    
    cout<<a<<endl<<b<<endl;


    return 0;   
}