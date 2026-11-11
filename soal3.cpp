#include <iostream>
#include <string>

using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

    // TODO : Menambahkan karakter ke stack
    void push(char value) {
        top++;
        stack[top] = value;
    }

    // TODO : Mengambil karakter paling atas
    char pop() {
        char value = stack[top];
        top--;
        return value;
    }



int main() {
    system("cls");

    string kata;

    cout << "Masukkan kata : ";
    cin >> kata;

    // TODO : Memasukkan setiap karakter ke stack
    for (int i = 0; i < kata.length(); i++) {
        push(kata[i]);
    }

    cout << "Pengecekan :\n";
    cout << "Kata dibalik : ";

    // TODO Mengeluarkan karakter dari stack
    while (top != -1) {
        cout << pop();
    }

    cout << endl;

    if (kata == kata) {
        cout << "Kesimpulan : KATA INI ADALAH PALINDROM";
    } else {
        cout << "Kesimpulan : KATA INI BUKAN PALINDROM";
    }

    return 0;
}