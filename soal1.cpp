#include <iostream>
using namespace std;

int main () {

    int array [2][3][4];
    int angka1 = 2;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                array[i][j][k] = angka1;
                angka1 += 2;
            }
        }
    }

    int angka2  = 1;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                array[i][j][k] = angka2;
                angka2 +=1;
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        cout << "Lapis " << i+1 << endl;

        for(int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++){
                cout << array [i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}