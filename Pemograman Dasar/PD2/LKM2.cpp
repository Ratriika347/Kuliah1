#include <iostream>
using namespace std;
int main() {
    
    int panjang_cm, konversi_m, sisa_cm;
    cout << "Masukkan Panjang (cm) = ";
    cin >> panjang_cm;

    konversi_m = panjang_cm / 100;
    sisa_cm = panjang_cm % 100;

    cout << "Hasil Konversi = " << konversi_m << " meter " << sisa_cm << " cm " << endl;
}