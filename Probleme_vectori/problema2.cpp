#include <iostream>
#include <math.h>
using namespace std;

int vF[10];
int nr_cifre(int n) {
    return log10(n) + 1;
}

void display(int nr_vec, int *p) {
    for(int i = 0; i < nr_vec; ++i) {
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cout<<"n:";
    cin>>n;

    int k = nr_cifre(n);
    cout<<k<<endl;
    int *p = (int *)malloc(nr_cifre(n) * sizeof(int));
    int aux = 0;
    int aux2 = n;

    for(int i = k - 1; i >= 0; --i, n /= 10) {
        *(p+i) = n % 10;
    }

    for(int i = 0; i < nr_cifre(aux2); ++i) {
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    

    for(int i = 0; i < k; ++i) {
        for(int j = 0; j < k -i - 1; ++j) {
            if(*(p+j) < *(p+j+1)) {
                aux = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = aux;
            }
        }
    }
    display(k, p);

    while(aux2) {
        vF[aux2 % 10]++;
        aux2 /= 10;
    }

    for(int i = 0; i < 10; ++i) {
        if(vF[i] == 1) 
            cout<<i;
    }
    cout<<endl;

    free(p);
    p = nullptr;
    aux = 0;
    aux2 = 0;
    k = 0;

    return 0;   
}