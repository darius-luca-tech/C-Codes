#include <iostream>
using namespace std;

int numar(int n, int &m) {
    bool ok = false;
    int v[11], k = 0;

    while(n) {
        if((n % 10) % 2 == 1) {
            ok = true;
            v[k] = n % 10;
            k++;
        }
        n /= 10;
    }

    if(ok == false) {
        m = -1;
        return m;
    }

    for(int i = 0; i < k; ++i) {
        for(int j = i + 1; j < k; ++j) {
            if(v[i] < v[j]) {
                swap(v[i], v[j]);
            }
        }
    }


    m = 0;
    for(int i = 0; i < k; ++i) {
        m = m * 10 + v[i];
    }

    return m;
} 

int main() {
    int m = 0;
    int n = numar(74317, m);
    cout<<n<<endl;
    return 0;
}