#include <iostream>
using namespace std;
//se declara variabilele a si b de tip intreg
//variabila a memoreaza primul numar introdus de la tastatura
//variabila b memoreaza al doilea numar introdus de la tastatura
int a,b;
int main()
{
//se citesc numerele a si b
cout<<"Introduceti numerele a si b: "<<endl;
cin>>a>>b;
//se determina cel mai mic divizor comun prin scaderi repetate
while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
//se afiseaza a (care memoreaza acum cmmdc-ul dintre cele 2 numere)
cout<<"Cmmdc = "<<a;
}