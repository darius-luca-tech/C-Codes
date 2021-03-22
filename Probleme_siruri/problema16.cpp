#include <iostream>
using namespace std;

struct Nod {
    int date;
    Nod  *st;
    Nod  *dr;

    Nod(int a) {
        date = a;
        st = NULL;
        dr = NULL;
    }
};
