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

void hitungSum() {
    long long total = 0;
    for (Node* c = head; c; c = c->next) total += c->data;
    cout << total << endl;
}

int main() {
    int n, x;
    cin >> n;
    while (n--) { cin >> x; insertLast(x); }
    hitungSum();
}