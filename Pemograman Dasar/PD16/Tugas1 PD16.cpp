#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Membuka file dalam mode menulis
    ofstream fileMahasiswa("data_mahasiswa.txt");

    // Input data mahasiswa dan tulis ke dalam file
    while (true) {
        string nama;
        int date, month, year;

        //meminta pengguna menginput nama mahasiswa
        cout << "Masukkan nama mahasiswa (q untuk keluar): ";
        getline(cin, nama);

        //Periksa apakah data akan keluar
        if (nama == "q") {
            break;
        }

        //Meminta pengguna menginput tanggal lahir mahasiswa
        cout << "Masukkan tanggal lahir (DD MM YYYY): ";
        cin >> date >> month >> year;

        //pembersihan input buffer
        cin.clear();
        while (cin.get() != '\n');

        //Menulis data dengan pemisah ","
        fileMahasiswa << nama << "," << date << "/" << month << "/" << year << endl;
    }

    // Menutup file setelah selesai
    fileMahasiswa.close();

    cout << "Data mahasiswa telah disimpan dalam file data_mahasiswa.txt." << endl;

    return 0;
}
