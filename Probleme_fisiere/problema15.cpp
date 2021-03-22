#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);

int main() {
    int x;
    int maxim = 0;
    int i = 0;
    while(fin>>x) {
        if(x % 5 == 0) {
            if(x > maxim) {
                maxim = x;
            }

        }
        i++;
    }
    cout<<endl<<maxim<<" "<<i-1<<endl;

    ifstream in_file("problema15.cpp", ios::binary);
    in_file.seekg(0, ios::end);
    int file_size = in_file.tellg();
    cout<<file_size<<endl;
    return 0;
}