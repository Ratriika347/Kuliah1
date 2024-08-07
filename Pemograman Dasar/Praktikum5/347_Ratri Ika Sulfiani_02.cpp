#include <iostream>
using namespace std;

int main() {
    int N;
    // Membaca bilangan bulat N
    cout << "Masukkan sebuah bilangan : ";
    cin >> N;

    // Menghitung banyaknya operasi yang diperlukan
    int operasi = 0;
    while (N != 1) {
        if (N % 2 == 0) {
            N /= 2;
        } else {
            N = 3 * N + 1;
        }
        operasi++;
    }

    // Menampilkan hasil operasi
    cout << "Banyaknya operasi yang diperlukan adalah " << operasi << " kali" << endl;

    return 0;
}
