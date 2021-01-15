#include <iostream>
#include <fstream>
using namespace std;

fstream fin("in.txt", ios::in);
fstream fout("out.txt", ios::out);

struct data_dn {
    int luna, zi, an;
};

struct elev {
    char nume[20];
    char prenume[20];
    double medie;
    char clasa[7];
    data_dn data;
};


int main() {
    int nr_elevi;
    fin>>nr_elevi;
    elev a[nr_elevi];
    elev temp;


    for(int i = 0;i < nr_elevi; ++i) {
       fin>>a[i].nume>>a[i].prenume>>a[i].medie>>a[i].clasa>>a[i].data.zi>>a[i].data.luna>>a[i].data.an;
    }

    for(int i = 0; i < nr_elevi - 1; ++i) {
        for(int j = 0; j < nr_elevi - i - 1; ++j) {
            if(a[j].medie < a[j + 1].medie) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i = 0;i < nr_elevi; ++i) {
        fout<<a[i].nume<<" "<<a[i].prenume<<" "<<a[i].medie<<" "<<a[i].clasa<<" "<<a[i].data.zi<<" "<<a[i].data.luna<<" "<<a[i].data.an<<endl;
    }

    return 0;
}