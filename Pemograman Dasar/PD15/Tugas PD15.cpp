#include<iostream>
#include<string>
using namespace std;

struct dtnama {
    string nama;
};

struct dttl {
    int date;
    int month;
    int year;
};

struct data {
    struct dtnama nama;
    struct dttl tl;
} mahasiswa;

int main() {
    //Deklarasi struktur 'data'
    struct data;

    //Meminta pengguna menginput nama dan tanggal lahir
    cout << "Masukkan Nama: ";
    getline(cin, mahasiswa.nama.nama);

    cout << "Masukkan Tanggal Lahir (DD MM YYYY): ";
    cin >> mahasiswa.tl.date >> mahasiswa.tl.month >> mahasiswa.tl.year;

    //Menampilkan data
    cout << "Nama : " << mahasiswa.nama.nama << endl;
    cout << "Tanggal Lahir : " << mahasiswa.tl.date << "/" << mahasiswa.tl.month << "/" << mahasiswa.tl.year << endl;

    return 0;
}