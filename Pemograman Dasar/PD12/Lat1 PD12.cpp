#include <iostream>
using namespace std;

// Prototipe fungsi
int cariBilTerbesar(int bil1, int bil2);

int main() {
    // Input dua bilangan
    int bil1, bil2;
    cout << "Masukkan bilangan pertama : ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua : ";
    cin >> bil2;
    cout << endl;

    // Memanggil fungsi untuk menentukan bilangan terbesar
    int bilTerbesar = cariBilTerbesar(bil1, bil2);

    // Menampilkan hasil
    cout << "Bilangan terbesar adalah " << bilTerbesar << endl;

    return 0;
}

// Implementasi fungsi untuk mencari bilangan terbesar
int cariBilTerbesar(int bil1, int bil2) {
    if(bil1 > bil2)             return bil1;         
    else                        return bil2;
}
