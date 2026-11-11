#include <iostream>
using namespace std;

struct Node {
    string nama;
    int skor;
    Node* next;
};

Node* head = NULL;
Node *tail = NULL;

void tambahAwalNama(string nama) {
    Node* baru = new Node();
    baru->nama = nama;
    baru->next = head;
    head = baru;
}

void tambahAwalSkor(int skor) {
    Node* baru = new Node();
    baru->skor = skor;
    baru->next = head;
    head = baru;
}

void tambahAkhirNama(string nama) {
    Node* baru = new Node();
    baru->nama = nama;
    baru->next = NULL;
    if (head == NULL) {
        head = baru;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = baru;
}

void tambahAkhirNama(int skor) {
    Node* baru = new Node();
    baru->skor = skor;
    baru->next = NULL;
    if (head == NULL) {
        head = baru;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = baru;
}

void HapusAwal() {
    if (head == NULL) {
        cout << "List nya kosong\n";
        return;
    }
    Node *temp = head;
    head = head -> next;
    if (head == NULL) tail = NULL;
    delete temp;
}

