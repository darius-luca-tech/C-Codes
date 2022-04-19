#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("in.txt");
int main() {
    int x, ip1 = 0, ip2 = 0;

    while(fin>>x) {
        if((ip1 == 0) and (x % 2 == 1)) {
            ip1 = x;
        }

        if((ip2 == 0) and (x % 2 == 1) and (ip1 != 0)) {
            ip2 = x;
        }

        if((ip1 && ip2) && (x % 2 == 1)) {
            ip1 = ip2;
            ip2 = x;
        }
    }

    cout<<ip1<<" "<<ip2<<endl;
    return 0;
}