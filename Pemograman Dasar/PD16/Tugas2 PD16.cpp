#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// Struktur untuk menyimpan data karyawan
struct Karyawan {
    string nama;
    double gaji;
};

int main() {
    // Membuka file binary dalam mode menulis
    ofstream fileKaryawan("data_karyawan.bin", ios::binary);

    //Input data karyawan dan tulis ke dalam file
    Karyawan karyawan; //Deklarasi variabel
    while (true) {
        //Meminta pengguna menginput nama karyawan
        cout << "Masukkan nama karyawan (q untuk keluar): ";
        getline(cin,karyawan.nama);

        //Periksa apakah data akan keluar
        if (karyawan.nama == "q") {
            break;
        }

        //Meminta pengguna untuk menginput gaji karyawan
        cout << "Masukkan gaji karyawan: ";
        cin >> karyawan.gaji;

        //Pembersihan input buffer
        cin.clear();
        while (cin.get() != '\n');

        //Menulis data ke dalam file
        fileKaryawan.write(reinterpret_cast<char*>(&karyawan), sizeof(Karyawan));
    }

    // Menutup file setelah selesai
    fileKaryawan.close();

    cout << "Data karyawan telah disimpan dalam file data_karyawan.bin." << endl;

    return 0;
}
