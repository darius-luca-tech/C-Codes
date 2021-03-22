#include <iostream>
using namespace std;

//Variabile globale
const int MAX = 20;
int n, p, v[MAX];

//definirea functiilor
int solutie(int k);
void afisare(int k);
void BK(int k);

int main() {
    cout<<"n=";
    cin>>n;
    cout<<"p=";
    cin>>p;
    BK(1);

    return 0;
}

void BK(int k) {
    int i;
    for(i = v[k-1] + 1; i <= n; ++i) {
        v[k] = i;
        if(solutie(k)) 
            afisare(k);
        else 
            BK(k+1);
    }
}
int solutie(int k) {
    if(k == p) {
        return 1;
    }
    return 0;
}

void afisare(int k) {
    for(int i = 1; i <= k; ++i) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
/*
  2) bentita(40) fileu(400) grip(30) mansete(30) mingi(10) racheta(400) racordaj(70) sapca(60)
        1           2           3       4           5           6           7           8

    1234 128 1346 

    2b)

    5) camasa, cravata, pantaloni, pantofi, sacou, sosete
        1       2           3          4       5    6

    1 o sa fie inainte de 2
    2 o sa fie inaintea lui 5
    3 si 6 inaintea lui 4
    
    123564, 123645. 123654, 126345, 126354, 126534 d)

    6)caprifoi iasomie liliac tamarix scumpie
        1         2       3       4       5
    
    12345 12354 12534...54312 c)


    rosu galben verde albastru violet
      1     2      3      4       5

    123 124 125 132 .... 542

    azalea begonia vriesea busuioc veriga
        1   2       3           4      5
    azalea begonia vriesea - cu flori
    busuioc veriga - fara flori


    142 143 152 153 241 243 251 253 341 d)

    12346
    12356
    12456
    13456
    23456

    {1, 2, 3, 4}  = 4111 4112 4113 4114 4121 4122 4123 4124 4131 4132 4133 4134 4141 4142 4143 4141 
    1 2 3 4         
    1 2 3 4
    1 2 3 4


    2468
    13

    21 23 41 43 61 63 81 83

    135
    246
    789

    547, 548, 549, 567 578 569

    {0 3 6 2 9}
    {0 3 6 2 9}   3030, 3036 3032, 3090 3096 3092
    {0 3 6 2 9}
    {0 3 6 2 9}
    
    18 28 31


    Oedip = 1
    Poema romana = 2
    Rapsodia romana nr 1= 3
    Rapsodia romana nr 2 = 4
    Simfonia nr 1 = 5
    
    {Oedip, Poema romana, Rapsodia romana nr1, Rapsodia romana nr2, Simfonia nr1}
    {Oedip, Poema romana, Rapsodia romana nr1, Rapsodia romana nr2, Simfonia nr1}
    {Oedip, Poema romana, Rapsodia romana nr1, Rapsodia romana nr2, Simfonia nr1}

    a)


    {0,3,6,2,9},
    {0,3,6,2,9},
    {0,3,6,2,9},
    {0,3,6,2,9},

    a)

    28
    01010
    01011
    01100


    {a, b, c, d, e, f},
    {a, b, c, d, e, f},
    {a, b, c, d, e, f},
    {a, b, c, d, e, f},

    fefe

    d)




*/