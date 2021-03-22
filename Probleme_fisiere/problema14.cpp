#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    while(n != 0) {
        cout<<n<<" ";
        n /= 10;
    }

    cout<<endl;
    return 0;
}