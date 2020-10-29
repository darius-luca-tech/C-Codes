#include <iostream>
using namespace std;

int div(int n) {
    int counter = 0;
    for(int i = 1; i < n; ++i) {
        if(n % i == 0)
            counter++;
    }
    return counter;
}

int main() {
    int n;
    cout<<"Cate numere sa citesc:";
    cin>>n;
    int numar;

    while(n) {
        cout<<"numar:";
        cin>>numar;
        cout<<numar<<" are:"<<div(numar)<<" divizori"<<endl;
        n--;
    }

    return 0;
}