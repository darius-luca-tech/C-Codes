#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char a[] = "Lucas";
    int i = 0;
    int j = strlen(a) - 1;
    while(i < j) {
        char aux = a[i];
        a[i] = a[j];
        a[j] = aux;
        i++;
        j--;
    }   

    cout<<a+4<<endl;
    return 0;
}