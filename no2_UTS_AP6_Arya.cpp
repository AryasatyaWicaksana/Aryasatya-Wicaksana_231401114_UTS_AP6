#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int input, jumlah = 0;

    cout << "Masukkan angka: ";
    cin >> input;

    
    while (input != 0) {
        jumlah += input % 10; 
        input /= 10; 
    }
    cout << "Jumlah dari semua digit angka adalah: " << jumlah << endl;

    return 0;
}