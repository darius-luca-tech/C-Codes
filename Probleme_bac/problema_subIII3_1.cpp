#include <iostream>
#include <fstream>
using namespace std;

fstream fin("bac.txt", ios::in);
int *array = new int[10000000001];

int main() {
    int y;
    while(fin>>y) {
        array[y]++;
    } 
    fin.close();

    for(int i = 0; i < 10000000001; ++i) {
        if(array[i] != 0)
            cout<<i<<" "<<array[i]<<" ";
    }
    cout<<endl;

    delete[] array;
    return 0;
    

}