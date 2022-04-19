#include <iostream>
#include <sstream>
#include <locale>
using namespace std;

template<class T>
string format(T value) {
    stringstream ss;
    ss.imbue(locale(""));
    ss<<fixed<<value;
    return ss.str();
}

int main() {
    cout.imbue(locale(""));
    cout<<2102340<<endl;  
    return 0;
}
