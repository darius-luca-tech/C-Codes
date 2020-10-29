//se citeste un numar n intreg si apoi n nvumere intregi . Realizati un progran (sub programe )care sa numere cate numere din sirau cel putin o cifra para.
#include <iostream>
using namespace std;

bool check_nr(int nr) {
    while(nr) {
        if((nr % 10) % 2 == 0) {
            return true;
        }
        nr /= 10;
    }

    return false;
}

int main() {
    int n;
    cout<<"n=";
    cin>>n;

    int counter = 0;
    int numar;
    for(int i = 1; i <= n; ++i) {
        cout<<"numar=";
        cin>>numar;
        if(check_nr(numar)) counter++;
    }

    cout<<counter<<endl;
    return 0;
}