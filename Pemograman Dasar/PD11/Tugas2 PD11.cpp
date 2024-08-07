#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // Batas maksimum panjang string adalah 100
    char string[100];

    // Meminta pengguna untuk memasukkan string
    cout << "Masukkan sebuah string : ";
    cin.getline(string, 100);

    // Menghitung panjang string menggunakan fungsi strlen
    int pjg_string = strlen(string);

    // Menampilkan panjang string
    cout << "Panjang string adalah : " << pjg_string << endl;

    return 0;
}
