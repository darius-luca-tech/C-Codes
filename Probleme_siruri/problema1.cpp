#include <iostream>
#include <cstring>
using namespace std;

const char *pointer_char;

void init(char *p) {
    p = new char;
    cout<<"Pointer initialized - returning to main..."<<endl;
}

void destroy_pt(char *p) {
    delete p;
    cout<<"Pointer deleted - returning to main..."<<endl;
}

class CharPointer {
private:
    friend istream &operator>>(istream &in, CharPointer &p);
    friend ostream &operator<<(ostream& out, CharPointer &p);

public:
    char *_p;
    CharPointer(void);
    CharPointer(char *p);
    ~CharPointer(void);
    int get_size(char *_p);
    int length_p(char *_p);
    void set_name(char *name);

    friend istream &operator>>(istream &in, CharPointer &_p) {
        in>>_p;
        return in;
    }

    friend ostream &operator<<(ostream &out, CharPointer &_p) {
        out<<_p<<endl;
        return out;
    }

};

CharPointer::CharPointer(char *p) 
    :_p {new char} {
        _p = p;
        cout<<"Pointer value created"<<endl;
    }

CharPointer::CharPointer()
    : _p {new char} {
        cout<<"NULL Pointer created..."<<endl;
    }

CharPointer::~CharPointer() {
    delete _p;
    cout<<"Pointer is destroyed.Returning ...."<<endl;
}

int CharPointer::length_p(char *_p) {
    int len_p = 0;
    cout<<"Finding out the length of the pointer...:";
    while(*_p !='\0') {
        len_p++;
        *_p++;
    }
    return len_p;
}

void CharPointer::set_name(char *name) {
    strcpy(_p, name);
}

int main() {
    CharPointer str {"Luca"};
    cout<<str<<endl;
    cout<<"DONE"<<endl;
    return 0;
}