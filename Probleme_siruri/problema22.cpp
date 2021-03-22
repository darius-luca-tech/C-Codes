#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char vocala;
    cout<<"v:";
    cin>>vocala;

    int n;
    unsigned int lungime_subsir = 0;
    cout<<"n=";
    cin>>n;

    char s[n];  
    cout<<"s=";
    cin>>s;


    bool prim = false;

    for(int i = 0; i < n; ++i) {
        if((s[i] == vocala) and (prim == false)) {
            prim = true;
            lungime_subsir++;
            cout<<i;
        } else if((s[i] == vocala) and (prim == true)) {
            prim = false;
            cout<<i;
        }

        if(prim == true) {
            lungime_subsir++;
        }
    }

    cout<<lungime_subsir<<endl;
    return 0;
}


//1234 1243 1324 1342 1423 1432
//




/*
    1234 
    1243 x
    1324 x
    1342 x
    1423 x 
    1432

    2134 x
    2143
    2314 x
    2341  
    2413 x
    2431 x

    3124 x
    3142 x
    3214  
    3241 x
    3412 
    3421 x

    4123 
    4132 x
    4213 x
    4231 x
    4312 x
    4321 

    12345 12543 52143 52341 32145 32541
    acr arc car cra rac rca

    1234 1432 2143 2341 3241 3412 4123 4321

    1b)
    2


*/