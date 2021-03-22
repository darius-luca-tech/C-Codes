#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int top;
    int capacity;
public:
    Stack(int size = 10);
    ~Stack();
    void push(int value);
    void display();
    
    int pop();
    int getTopElement();
    int getSize();

    bool isEmpty();
    bool isFull();
};

Stack::Stack(int size) {
    arr = (int *)malloc(size * sizeof(int));
    capacity = size;
    top = -1;
}

Stack::~Stack() {
    free(arr);
    arr = NULL;
    cout<<"Deconstructor called...."<<endl;
}

void Stack::push(int value) {
    if(isFull()) {
        cout<<"Stack smashed..(stack overflow)..."<<endl;
        return ;
    }

    *(arr + ++top) = value;
}


int Stack::getSize() {
    return top + 1;
}

bool Stack::isEmpty() {
    return top < 0;
}

bool Stack::isFull() {
    return top == capacity - 1;
}

int Stack::pop() {
    if(isEmpty()) {
        cout<<"Stack smashed...(stack underflow)"<<endl;
        return -1;
    } else {
        return *(arr - --top);
    }
}

int Stack::getTopElement() {
    return *(arr + top);
}

void Stack::display() {
    for(int i = top; i >= 0; --i) {
        if(i != 0) {
            cout<<*(arr+i)<<endl;
            cout<<"|"<<endl;
        } else {
            cout<<*(arr+i)<<endl;
        }
    }

    cout<<endl;
}

int main() {
    Stack st(10);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<"Size of the Stack:"<<st.getSize()<<" "<<"Top:"<<st.getTopElement()<<endl;
    cout<<endl;
    st.display();
    st.pop();
    st.display();

    // Stack *p = nullptr;
    // p = new Stack[10];
    // p->push(10);
    // p->push(30);
    // p->push(20);
    // p->push(10);
    // p->push(30);
    // p->push(20);
    // p->push(10);
    // p->push(30);
    // p->push(20);
    // p->push(300);
    // p->push(400);
    // p->display();
    // cout<<p->getTop()<<endl;s
    // (p+1)->display();

    return 0;
}





