#include <iostream>
#include <cstring>
using namespace std;


#include <iostream>
#include <cstring>
using namespace std;

class CharPointer {
private:
    friend istream &operator>>(istream &in, CharPointer &str);
    friend ostream &operator<<(ostream& out, CharPointer &str);
    char *_p {nullptr};
    char *temp {nullptr};

public:
    CharPointer();
    CharPointer(char *p);
    ~CharPointer();
    size_t get_size();
    void set_name(char *name);

    friend istream &operator>>(istream &in, CharPointer &str) {
        char *buff = new char[100];
        in>>buff;
        str = CharPointer{buff};
        delete[] buff; //free the memory
        return in; 
    } 

    friend ostream &operator<<(ostream &out, CharPointer &str) {
        out<<str._p;
        return out;
    }

};

CharPointer::CharPointer(char *p) {
    if(p == nullptr) {
        _p = new char[1];
        _p[0] = '\0';
    } else {
        _p = new char[strlen(p) + 1];
        strcpy(_p, p);
    }

    cout<<"(Constructor) Pointer Value created..."<<endl;
}

CharPointer::~CharPointer() {
    delete[] temp;
    delete[] _p;
    cout<<"(Destructor)Pointers deleted..."<<endl;
    cout<<"Luiza Protection Program Canceled"<<endl;
    cout<<"Galileo process killed"<<endl;
    cout<<"Process Shutdown......"<<endl;
}

size_t CharPointer::get_size() {
    temp = (char*) malloc(sizeof(_p) + 1); 
    temp = _p;
    int count = 0;
    while(*temp != '\0') {
        temp++;
        count++;
    }

    temp = NULL;
    return count;
}   


int main() {
    CharPointer output {"Luiza's coordinates at 13:01: 45.7966227,20.7199777,21"};
    cout<<output<<endl;

    return 0;
}