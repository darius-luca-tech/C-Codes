/*
Subprogramul patrate are doi parametri, x și y, prin care primește câte un număr natural
(1≤x≤y≤10 9 ). Subprogramul afişează pe ecran o expresie aritmetică reprezentând suma numerelor din
intervalul [x,y] care au proprietatea că sunt pătrate perfecte, urmate de valoarea acestei sume.
Termenii sumei sunt într-o ordine oarecare și sunt separați prin câte un simbol plus (+), iar valoarea
sumei este precedată de simbolul egal (=), ca în exemplu. Dacă nu există niciun astfel de termen, se
afișează pe ecran mesajul nu exista.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=10 și y=50 se poate afișa pe ecran 16+25+36+49=126
*/

#include <iostream>
#include <math.h>
using namespace std;

int c;
void patrate(int x, int y);
bool verificare_perfect(int number) {
    for(int i = 0; i < number; i++) 
        if(i == sqrt(number))
            return true;
    return false;
}
    
int main() {
    patrate(10, 50);
    return 0;
}

void patrate(int x, int y) {
    int suma = 0;
    for(int i = x; i <= y; ++i) {
        if(i == y) {
            cout<<i<<"="<<suma<<endl;
        } else if(verificare_perfect(i)){
            suma += i;
            cout<<i<<"+";
        }
            
    }

}