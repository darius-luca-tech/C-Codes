#include <iostream>
using namespace std;

void citire(int *a, int n) {
    for(int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"]=";
        cin>>*(a+i);
    }
}

void scriere(int *a, int n) {
    for(int i = 0; i < n; ++i) {
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}

void swap(int &a, int &b) {
    int swap = a;
    a = b;
    b = swap;
}

void sortare(int *a, int n) {
    for(int i = 0; i < n - 1; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(*(a + i) > *(a + j)) 
                swap(*(a+i), *(a+j));
        }
    }
}

int main() {
    int n;
    cout<<"n=";
    cin>>n;

    int v[n];
    citire(v, n);
    cout<<"Vectorul inainte de sortare:"<<endl;
    scriere(v, n);
    cout<<"Vectorul dupa sortare:"<<endl;
    sortare(v, n);
    scriere(v, n);

    return 0;

}

