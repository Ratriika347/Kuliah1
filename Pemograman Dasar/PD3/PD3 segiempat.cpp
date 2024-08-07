#include <iostream>
using namespace std;
int main() {
    
    float panjang_cm, lebar_cm, keliling, luas;
    cout << "Masukkan Panjang (cm) = ";
    cin >> panjang_cm;
    cout << "Masukkan Lebar (cm) = ";
    cin >> lebar_cm;

    keliling = 2 * (panjang_cm + lebar_cm);
    luas = panjang_cm * lebar_cm;

    cout << "Keliling Segi Empat = " << keliling << " cm " << endl;
    cout << "Luas Segi Empat = " << luas << " cm² " << endl;
}