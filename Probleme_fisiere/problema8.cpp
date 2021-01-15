#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    int x;
    while(fin>>x) {
            if(x % 3 == 0) // <- schimba conditia : DONE
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
                c = x;
            }
                
    }

    cout<<a<<" "<<b<<" "<<c<<endl; 
    cout<<endl;
    fin.close();
    return 0;
}