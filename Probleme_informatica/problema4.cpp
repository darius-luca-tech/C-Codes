#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");
int main() {
    int n, max1 = 0, max2 = 0, max3 = 0;
    while(fin >> n) {
        if(((n / 10) % 10) == 2 && (n % 10) == 0) {
            if(n > max3) {
                max1 = max2;
                max2 = max3;
                max3 = n;
            } else if(n > max2) {
                max1 = max2;
                max2 = n;
            } else if(n > max1) {
                max1 = n;
            }
        }
    }

    cout<<max1<<" "<<max2<<" "<<max3<<endl;
    return 0;
}