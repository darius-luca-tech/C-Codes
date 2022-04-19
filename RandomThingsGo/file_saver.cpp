#include <iostream> 
#include <fstream>
using namespace std; 

int main() { 
    int n;
    ifstream f("save.txt");
    ofstream g("track.txt");
    f>>n;
    g<<n+1; 

    return 0;
} 
