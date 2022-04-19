//
// Created by lucac on 8/9/2021.
//

#include <iostream>
using namespace std;

long long n;
int main() {
    cin>>n;
    int total_capete = 0;

    for(int i = 1; i <= n; i++) {
        total_capete += 6;
        total_capete -= 1;
    }

    cout<<total_capete<<endl;
    return 0;
}
