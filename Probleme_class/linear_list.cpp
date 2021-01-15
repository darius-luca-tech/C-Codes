#include <iostream>
using namespace std;

struct Nod {
    int data;
    Nod *next;

    friend ostream &operator<<(ostream &out, Nod &ll) {
        out<<ll.data;
        return out;
    }
};

class LinkedLists  {
private:
    Nod *head, *tail;
public:
    void add_node(int n);
    void front(int n);
    void display(Nod *a);
    void after(Nod *aux, int n);
    void del();
    bool isEmpty(Nod *front);
    Nod *get_head();
    Nod *get_tail();
    LinkedLists() {
        head = nullptr;
        tail = nullptr;
    }
};

bool LinkedLists::isEmpty(Nod *front) {
    return front == NULL;
}

void LinkedLists::add_node(int n) {
    Nod *temp = new Nod;
    temp->data = n;
    temp->next = NULL;

    if(head == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = tail->next;
    }
}

Nod *LinkedLists::get_head() {
    return head;
}

Nod *LinkedLists::get_tail() {
    return tail;
}

void LinkedLists::display(Nod *a) {
    Nod *temp;
    temp = a;
    while(temp != NULL) {
        if(temp->next == NULL) {
            cout<<temp->data<<endl;
            temp = temp->next;
        } else {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
}

void LinkedLists::front(int n) {
    Nod *temp = new Nod;
    temp->data = n;
    temp->next = head;
    head = temp;
}

void LinkedLists::after(Nod *a, int value) {
    Nod *p = new Nod;
    p->data = value;
    p->next = a->next;
    a->next = p;
}

void LinkedLists::del() {
    if(isEmpty(head)) 
        return ;
    
    Nod *temp = head;
    head = head->next;
    delete temp;
}


int main() {
    LinkedLists lista;
    lista.add_node(1);
    lista.add_node(2);
    lista.add_node(65);
    lista.display(lista.get_head());
    lista.del();
    lista.display(lista.get_head());

    return 0;
}