#include <iostream>
#include <string>
using namespace std;

struct Node {
    string song;
    Node *prev, *next;
};

Node *head = NULL, *cur = NULL;

void add(string s) {
    Node *n = new Node{s, NULL, NULL};

    if (head == NULL)
        head = cur = n;
    else {
        n->prev = cur;
        cur->next = n;
        cur = n;
    }
}

void forward() {
    if (cur->next != NULL)
        cur = cur->next;
    cout << "Playing: " << cur->song << endl;
}

void backward() {
    if (cur->prev != NULL)
        cur = cur->prev;
    cout << "Playing: " << cur->song << endl;
}

int main() {
    add("Song A");
    add("Song B");
    add("Song C");

    cout << "Playing: " << cur->song << endl;

    backward();
    forward();
    forward();

    return 0;
}
