#include <iostream>
using namespace std;

struct coord {
    float x;
    float y;
};

struct cerc {
    int raza;
    coord centru;
} fig;

struct Unghiuri {
    float FataMuchie;
    float FataFata;
};

// struct poliedru {
//     int NrVarfuri;
//     int Muchie;
//     Unghiuri Unghi;
// } p;

struct sol_img {
    float pre;
    float pim;
};

struct ecuatie {
    unsigned int numar;
    sol_img solutie[100];
} s;

//c.numar c.carte[2].titlu c.carte[2].autor
struct det_car {
    char titlu[20];
    char autor[20];
};

// struct biblio {
//     unsigned int numar;
//     det_car carte[100];
// } c;

struct spectacol {
    int cod, nrActori, varsta[9];
} s[20];

struct data {
    int luna;
    int zi;
};

struct turism {
    int cod;
    data dataInceput;
    data dataFinal;
} ob;

struct tdata {
    int zi, luna;
} d;

struct eveniment {
    int nr;
    struct tdata dev;
} e;

struct punct {
    float x, y;
} p;

struct cerc {
    struct punct centru;
    float raza;
} c;

int main() {
    // fig.centru.x = 14;
    // fig.centru.y = -14;
    // fig.raza = 10;
    // cout<<fig.centru.x<<" "<<fig.centru.y<<" "<<fig.raza<<endl;
    if((d.zi < e.dev.zi) && (d.luna < e.dev.luna)) return 1;

    fig.raza = 1;
    fig.centru.x = 0;
    fig.centru.y = 0;

    if((p.x == c.centru.x) and (p.y == c.centru.y)) return 1;
    return 0;
}