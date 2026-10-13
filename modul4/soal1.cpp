#include <iostream>
#include <string>
using namespace std;

struct Node { string nama; Node* next; };
Node* head = nullptr;

void insertLast(string n) {
    Node* b = new Node{n, nullptr};
    if (!head) { head = b; return; }
    Node* c = head;
    while (c->next) c = c->next;
    c->next = b;
}

void deleteFirst() { Node* t = head; head = head->next; delete t; }

void tampil() {
    cout << "Antrean: ";
    for (Node* c = head; c; c = c->next) cout << c->nama << (c->next ? " -> " : "");
    cout << endl;
}

int main() {
    int p;
    while (cin >> p && p != 3) {
        if (p == 1) {
            string n; cin >> ws; getline(cin, n);
            insertLast(n); tampil();
        } else if (p == 2 && head) {
            cout << "Melayani: " << head->nama << endl;
            deleteFirst(); tampil();
        }
    }
}