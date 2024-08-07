#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void baca_txt(string lokasiBerkas) {
    string baris;
    ifstream obj_file;
    obj_file.open(lokasiBerkas);

    if (obj_file.is_open()) {
        while (getline(obj_file, baris)) {
            cout << baris << '\n';
        }
        obj_file.close();
    } else {
        cout << "Unable to open file";
    }
}

struct nama_pemesan {
    string nama_lengkap;
};
struct contact {
    char no_tlp[15];
    string email;
};
struct penerbangan {
    string bulan, rute_penerbangan;
    int tanggal;
};
struct {
    struct nama_pemesan data_nama;
    struct contact data_contact;
    struct penerbangan data_penerbangan;
} data_pemesan;


void data_diri() {
    system("cls");

    cout << "==========================================\nSelamat Datang Di BOOKINGTIKET2024.COM\n==========================================\n";
    cout << "   Silakan Mengisi Data Diri Anda" << endl;
    cin.ignore();
    cout << "   Nama Lengkap: "; getline(cin, data_pemesan.data_nama.nama_lengkap);
    cout << "   Email: "; getline(cin, data_pemesan.data_contact.email);
    cout << "   No. Handphone: "; cin >> data_pemesan.data_contact.no_tlp;

    ofstream data;
    data.open("berkas/dataPemesan.txt", ios::app);
    data << "Email: " << data_pemesan.data_contact.email << endl;
    data << "Nama Lengkap: " << data_pemesan.data_nama.nama_lengkap << endl;
    data << "No. HandPhone: " << data_pemesan.data_contact.no_tlp << endl;
    data.close();
}

void rute_keberangkatan() {
    int pilih_tujuan;

    system("cls");
    
    baca_txt("berkas/dataPesawat.txt");
    cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;
    cout << "Masukkan Pilihan: "; cin >> pilih_tujuan;
    cout << "------------------------------------------";
    
    ofstream data;
    data.open("berkas/dataPemesan.txt", ios::app);
    if (pilih_tujuan == 1) {
        data_pemesan.data_penerbangan.rute_penerbangan = "Yogyakarta --> Jakarta";
        data << "Rute Penerbangan: " << data_pemesan.data_penerbangan.rute_penerbangan << endl;
    } else if (pilih_tujuan == 2) {
        data_pemesan.data_penerbangan.rute_penerbangan = "Semarang --> Medan";
        data << "Rute Penerbangan: " << data_pemesan.data_penerbangan.rute_penerbangan << endl;
    } else if (pilih_tujuan == 3) {
        data_pemesan.data_penerbangan.rute_penerbangan = "Surabaya --> Batam";
        data << "Rute Penerbangan: " << data_pemesan.data_penerbangan.rute_penerbangan << endl;
    } else if (pilih_tujuan == 4) {
        data_pemesan.data_penerbangan.rute_penerbangan = "Bandung --> Makassar";
        data << "Rute Penerbangan: " << data_pemesan.data_penerbangan.rute_penerbangan << endl;
    } else if (pilih_tujuan == 5) {
        data_pemesan.data_penerbangan.rute_penerbangan = "Malang --> Papua";
        data << "Rute Peerbangan: " << data_pemesan.data_penerbangan.rute_penerbangan << endl;
    }
    data.close();
}

void bulan_keberangkatan() {
    int pilihan_bulan;
    system("cls");

    cout << "\n\t         Bulan Keberangkatan\n";
    cout << "==============================================\n";
    cout << "               | Pilih Bulan |\n";
    cout << "==============================================\n";
    cout << "   | 1. Januari       | 7. Juli       |\n";
    cout << "   | 2. Februari      | 8. Agustus    |\n";
    cout << "   | 3. Maret         | 9. September  |\n";
    cout << "   | 4. April         | 10. Oktober   |\n";
    cout << "   | 5. Mei           | 11. November  |\n";
    cout << "   | 6. Juni          | 12. Desember  |\n";
    cout << "==============================================\n\n";
    cout << "Masukkan Pilihan: "; cin >> pilihan_bulan;

    system("cls");
    if (pilihan_bulan == 1) {
        data_pemesan.data_penerbangan.bulan = "Januari 2024";

        cout << "-----------------------------" << endl;
        cout << "       Januari 2024" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
        cout << " 1    2   3   4   5   6   7" << endl;
        cout << " 8    9  10  11  12  13  14" << endl;
        cout << "15   16  17  18  19  20  21" << endl;
        cout << "22   23  24  25  26  27  28" << endl;
        cout << "29   30  31" << endl;
        cout << "-----------------------------" << endl;

    } else if (pilihan_bulan == 2) {
        data_pemesan.data_penerbangan.bulan = "Februari 2024";

        cout << "-----------------------------" << endl;
        cout << "       Februari 2024" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
        cout << "             1   2   3   4" << endl;
        cout << " 5   6   7   8   9  10  11" << endl;
        cout << "12  13  14  15  16  17  18" << endl;
        cout << "19  20  21  22  23  24  25" << endl;
        cout << "26  27  28  29" << endl;
        cout << "-----------------------------" << endl;

    } else if (pilihan_bulan == 3) {
        data_pemesan.data_penerbangan.bulan = "Maret 2024";

        cout << "-----------------------------" << endl;
        cout << "       Maret 2024" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
        cout << "                 1   2   3" << endl;
        cout << " 4   5   6   7   8   9  10" << endl;
        cout << "11  12  13  14  15  16  17" << endl;
        cout << "18  19  20  21  22  23  24" << endl;
        cout << "25  26  27  28  29  30  31" << endl;
        cout << "-----------------------------" << endl;

    } else if (pilihan_bulan == 4) {
        data_pemesan.data_penerbangan.bulan = "April 2024";

        cout << "-----------------------------" << endl;
        cout << "       April 2024" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
        cout << "     1   2   3   4   5   6" << endl;
        cout << " 7   8   9  10  11  12  13" << endl;
        cout << "14  15  16  17  18  19  20" << endl;
        cout << "21  22  23  24  25  26  27" << endl;
        cout << "28  29  30" << endl;
        cout << "-----------------------------" << endl;

    } else if (pilihan_bulan == 5) {
        data_pemesan.data_penerbangan.bulan = "Mei 2024";
        
        cout << "-----------------------------" << endl;
        cout << "       Mei 2024" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
        cout << "             1   2   3   4" << endl;
        cout << "5    6   7   8   9  10  11" << endl;
        cout << "12  13  14  15  16  17  18" << endl;
        cout << "19  20  21  22  23  24  25" << endl;
        cout << "26  27  28  29  30  31" << endl;
        cout << "-----------------------------" << endl;

    } else if (pilihan_bulan == 6) {
        data_pemesan.data_penerbangan.bulan = "Juni 2024";

        cout << "-----------------------------" << endl;
        cout << "       Juni 2024" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
        cout << "                         1" << endl;
        cout << " 2   3   4   5   6   7   8" << endl;
        cout << " 9  10  11  12  13  14  15" << endl;
        cout << "16  17  18  19  20  21  22" << endl;
        cout << "23  24  25  26  27  28  29" << endl;
        cout << "30" << endl;
        cout << "-----------------------------" << endl;

    } else if (pilihan_bulan == 7) {
        data_pemesan.data_penerbangan.bulan = "Juli 2024";

        cout << "-----------------------------" << endl;
        cout << "       Juli 2024" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
        cout << " 1   2   3   4   5   6   7" << endl;
        cout << " 8   9  10  11  12  13  14" << endl;
        cout << "15  16  17  18  19  20  21" << endl;
        cout << "22  23  24  25  26  27  28" << endl;
        cout << "29  30  31" << endl;
        cout << "-----------------------------" << endl;
        
    } else if (pilihan_bulan == 8) {
        data_pemesan.data_penerbangan.bulan = "Agustus 2024";

        cout << "-----------------------------" << endl;
        cout << "       Agustus 2024" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
        cout << " 1   2   3   4   5   6   7" << endl;
        cout << " 8   9  10  11  12  13  14" << endl;
        cout << "15  16  17  18  19  20  21" << endl;
        cout << "22  23  24  25  26  27  28" << endl;
        cout << "29  30  31" << endl;
        cout << "-----------------------------" << endl;

    } else if (pilihan_bulan = 9) {
        data_pemesan.data_penerbangan.bulan = "September 2024";

        cout << "-----------------------------" << endl;
        cout << "       September 2024" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
        cout << " 1   2   3   4   5   6   7" << endl;
        cout << " 8   9  10  11  12  13  14" << endl;
        cout << "15  16  17  18  19  20  21" << endl;
        cout << "22  23  24  25  26  27  28" << endl;
        cout << "29  30" << endl;
        cout << "-----------------------------" << endl;

    } else if (pilihan_bulan = 10) {
        data_pemesan.data_penerbangan.bulan = "Oktober 2024";

        cout << "-----------------------------" << endl;
        cout << "       Oktober 2024" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
        cout << " 1   2   3   4   5   6   7" << endl;
        cout << " 8   9  10  11  12  13  14" << endl;
        cout << "15  16  17  18  19  20  21" << endl;
        cout << "22  23  24  25  26  27  28" << endl;
        cout << "29  30  31" << endl;
        cout << "-----------------------------" << endl;

    } else if (pilihan_bulan = 11) {
        data_pemesan.data_penerbangan.bulan = "November 2024";

        cout << "-----------------------------" << endl;
        cout << "       November 2024" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
        cout << " 1   2   3   4   5   6   7" << endl;
        cout << " 8   9  10  11  12  13  14" << endl;
        cout << "15  16  17  18  19  20  21" << endl;
        cout << "22  23  24  25  26  27  28" << endl;
        cout << "29  30" << endl;
        cout << "-----------------------------" << endl;
        
    } else if (pilihan_bulan = 12) {
        data_pemesan.data_penerbangan.bulan = "Desember 2024";

        cout << "-----------------------------" << endl;
        cout << "       Desember 2024" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
        cout << "1  2  3  4  5  6  7" << endl;
        cout << "8  9  10 11 12 13 14" << endl;
        cout << "15 16 17 18 19 20 21" << endl;
        cout << "22 23 24 25 26 27 28" << endl;
        cout << "29 30 31" << endl;
        cout << "-----------------------------" << endl;

    }
}


int main() {
    int pilih_menu;

    cout << "==========================================\nSelamat Datang Di BOOKINGTIKET2024.COM\n==========================================\n";
    cout << "   Menu Utama:\n   1. Pesan Tiket Pesawat\n   2. Melihat Pesanan Tiket\n";
    cout << "------------------------------------------\n";
    cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;
    cout << "Masukkan Pilihan: "; cin >> pilih_menu;
    cout << "------------------------------------------\n";

    if (pilih_menu == 1) {
        data_diri();
        rute_keberangkatan();
        bulan_keberangkatan();
    } else if (pilih_menu == 2) {
        cout << "Jalankan  Melihat Pesanan Tiket";
    }
    

return 0;
}