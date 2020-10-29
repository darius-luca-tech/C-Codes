#include <iostream>
using namespace std;

int count_poz, count_neg;

void scriere(int *a, int n) {
    for(int i = 0; i < n; ++i) {
        cout<<"a["<<i<<"]=";
        cin>>*(a+i);
    }
}


void afisare(int *a, int n) {
    for(int i = 0; i < n; ++i) {
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}

void counting(int *a, int n, int &count_poz, int &count_neg) {
    for(int i = 0; i < n; ++i) {
        if(*(a+i) > 0) {
            count_poz++;
        } else if(*(a+i) < 0) {
            count_neg++;
        }
    }
}

int check_count() {
    if (count_poz > count_neg)
        return 1;
    else if (count_poz < count_neg) 
        return -1;
    else
        return 0;
}

int main() {
    int n;
    cout<<"n=";
    cin>>n;

    int a[n];

    scriere(a, n);
    cout<<"Vectorul este:";
    afisare(a, n);
    counting(a, n, count_poz, count_neg);
    cout<<"Vectorul returneaza:"<<check_count()<<endl;

    return 0;
}