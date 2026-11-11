#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

Node* buatNode(int data) {
    Node* baru = new Node;

    baru->data = data;
    baru->kiri = NULL;
    baru->kanan = NULL;

    return baru;
}

Node* insert(Node* akar, int data) {

    // Jika posisi kosong, maka akan buat node baru
    if (akar == NULL) {
        return buatNode (data);
    }

    // Jika data lebih kecil, maka akan masuk ke kiri
    if ( data < akar->data) {
        akar->kiri = insert (akar->kiri, data);
    }

    // Jika data lebih besar, maka akan masuk ke kanan
    else if ( data > akar->data) {
        akar->kanan = insert (akar->kanan, data);
    }
    return akar;
}

void inOrder(Node* akar) {
    if (akar != NULL) {
        inOrder (akar->kiri);
        cout << akar->data << " ";
        inOrder (akar->kanan);
    }
}

int main() {
    system("cls");

    Node* akar = NULL;
    int angka;

    cout << "Masukkan angka (0 untuk berhenti):\n";

    while (true) {

        cout << "Input : ";
        cin >> angka;

        // Berhenti jika pengguna memasukkan 0
        if (angka == 0) {
            break;
        }
    
        // Angka dimasukkan ke tree
        akar = insert (akar, angka);
    }

    cout << "\nData (In-order)   : ";
    inOrder(akar);

    if (akar->kiri) {
        cout << "\nNilai terkecil   : " << angka << endl;
    } 
    if (akar->kanan) {
        cout << "Nilai terbesar   : " << angka << endl;
    }

    return 0;
}