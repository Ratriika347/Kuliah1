#include <iostream>
using namespace std;
#define phi 3.14
int main() {

    int angka_menu, panjang_kubus, jari_jari, tinggi_silinder, volume_kubus;
    float luas_lingkaran, volume_silinder;

    cout << "Pilih menu yang ingin ditampilkan! " << endl;
    cout << "1 Volume Kubus " << endl;
    cout << "2 Luas Lingkaran " << endl;
    cout << "3 Volume Silinder " << endl << endl;

    cout << "Masukkan angka dari menu yang ingin ditampilkan : ";
    cin >> angka_menu;

    switch (angka_menu){
        case 1 : cout << "Menampilkan proses penghitungan volume kubus " << endl;
            cout << "Masukkan panjang kubus (cm) : ";
            cin >> panjang_kubus;

            volume_kubus = panjang_kubus * panjang_kubus * panjang_kubus;

            cout << "Volume Kubus = " << volume_kubus << " cm kubik " << endl;
            break;

        case 2 : cout << "Menampilkan proses penghitungan luas lingkaran " << endl;
            cout << "Masukkan jari-jari lingkaran (cm) : ";
            cin >> jari_jari;

            luas_lingkaran = phi * jari_jari * jari_jari;

            cout << "Luas Lingkaran = " << luas_lingkaran << " cm persegi " << endl;
            break;

        case 3 : cout << "Menampilkan proses penghitungan volume silinder " << endl;
            cout << "Masukkan jari-jari alas (cm) : ";
            cin >> jari_jari;
            cout << "Masukkan tinggi silinder (cm) : ";
            cin >> tinggi_silinder;

            volume_silinder = phi * jari_jari * jari_jari * tinggi_silinder;

            cout << "Volume Silinder = " << volume_silinder << " cm kubik " << endl;
            break;
            
        default : cout << "Tidak ada menu yang akan ditampilkan ";
    }
}