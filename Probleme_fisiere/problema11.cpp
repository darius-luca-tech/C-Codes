#include <iostream>
#include <fstream>
using namespace std;

bool _checkpw2(int n) {
    while(n % 2==0) {
        n /=2;
    }

    if(n == 1) {
        return false;
    } else {
        return true;
    }
}

fstream fin("in.txt", ios::in);

int main() {
    int x;
    while(fin>>x) {
        if(_checkpw2(x) == 0)
            cout<<(x)<<" ";
    }
    cout<<endl;

    return 0;
}