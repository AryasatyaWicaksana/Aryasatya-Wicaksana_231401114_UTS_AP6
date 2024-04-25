#include <iostream>
using namespace std;

int main() {
    int baris;

    cout << "Masukkan jumlah baris: ";
    cin >> baris;

    int angka = 1; 

    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= i; j++) {
            cout << angka << " "; 
            angka++; 
        }
        cout << endl; 
    }

    return 0;
}