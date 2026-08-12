#include <iostream>
using namespace std;

struct Node {
    int id;
    string name;
    Node* next;
};

Node* head = NULL;

void insert(int id, string name) {
    Node* n = new Node{id, name, head};
    head = n;
}

void search(int id) {
    Node* p = head;
    while (p) {
        if (p->id == id) {
            cout << "Found: " << p->name << endl;
            return;
        }
        p = p->next;
    }
    cout << "Not Found\n";
}

void remove(int id) {
    Node *p = head, *q = NULL;

    while (p && p->id != id)
        q = p, p = p->next;

    if (!p) return;

    if (q) q->next = p->next;
    else head = p->next;

    delete p;
}

void display() {
    for (Node* p = head; p; p = p->next)
        cout << p->id << " " << p->name << endl;
}

int main() {
    insert(101, "Rahul");
    insert(102, "Priya");
    insert(103, "Amit");

    display();
    search(102);
    remove(102);

    cout << "After deletion:\n";
    display();

    return 0;
}
