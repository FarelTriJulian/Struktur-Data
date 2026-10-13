#include <iostream>
using namespace std;

struct Node { int data; Node* next; };
Node* head = nullptr;

void insertLast(int x) {
    Node* b = new Node{x, nullptr};
    if (!head) { head = b; return; }
    Node* c = head;
    while (c->next) c = c->next;
    c->next = b;
}

void insertAfter(int target, int x) {
    Node* c = head;
    while (c && c->data != target) c = c->next;
    if (c) c->next = new Node{x, c->next};
}

int main() {
    int n, x, target, baru;
    cin >> n;
    while (n--) { cin >> x; insertLast(x); }
    cin >> target >> baru;
    insertAfter(target, baru);
    for (Node* c = head; c; c = c->next) cout << c->data << (c->next ? " -> " : "");
    cout << endl;
}