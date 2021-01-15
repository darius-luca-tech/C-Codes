#include <iostream>
#include <fstream>
using namespace std;

ifstream f("in.txt");
int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    int x;
    int min; 
    while(f>>x) {
            if(x % 100 == 20)
                if(x < c or !c) 
                    if (x < b or !b) {
                        if(b < c or !c)
                            c = b;
                        if(x < a or !a) {
                            if(a < b or !b)
                                b = a;
                            a = x;
                    } else {
                        b = x;
                    }
                    
                } else {
                    b = x;
                }

    }

    cout<<a<<" "<<b<<" "<<c<<endl; 
    cout<<endl;
    f.close();
    return 0;
}