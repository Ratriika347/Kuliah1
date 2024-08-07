#include <iostream>
using namespace std;

int main() {
    float bilangan1, bilangan2, hasil;
    cout << "Masukkan Bilangan Pertama = ";
    cin >> bilangan1;
    cout << "Masukkan Bilangan Kedua = ";
    cin >> bilangan2;

    hasil = bilangan1 + bilangan2;

    cout << "Hasil Penjumlahan dari : " << bilangan1 << " + " << bilangan2 << " = " << hasil << endl;

    return 0;
}