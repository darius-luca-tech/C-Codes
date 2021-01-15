#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);
int old_value;
int new_value;

void do1() {
    if(new_value < old_value) {
        new_value = old_value;
        old_value = 0; 
    }
}

int main() {
    int x;

    while(fin>>x) {
        if(x % 10 == 0) {
            old_value++;
            cout<<x<<" ";
        } else {
            do1();
        }
        cout<<endl;    
    }
    do1();

    char a[20] = "Luca";
    cout<<a<<endl;

    cout<<new_value<<endl;
    return 0;

}