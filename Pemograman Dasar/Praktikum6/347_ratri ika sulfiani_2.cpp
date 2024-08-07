#include<iostream>
#include <string>
using namespace std;

struct Hiu{
    string nama;
    string makanan;
} ;

int main() {
    int jmlHiu;

    //Array untuk menyimpan biodata dari hiu
    Hiu dataHiu[999]; //Misalkan batas maksimum banyak biodata hiu adalah 999

    //Meminta pengguna memasukkan jumlah biodata hiu
    cout << "Masukkan jumlah biodata hiu : ";
    cin >> jmlHiu;

    //Meminta pengguna memasukkan nama dan biodata hiu
    for(int i=0; i < jmlHiu; i++){
        cout << "Masukkan Nama Hiu : ";
        cin >> dataHiu[i].nama;
        cout << "Masukkan Makanan Hiu : ";
        cin >> dataHiu[i].makanan;
    }

    cout << "Nama-nama hiu yang suka makan tomato : ";
    for(int i=0; i < jmlHiu; i++){
        if(dataHiu[i].makanan == "tomato"){
        cout << dataHiu[i].nama << " ";
        }
    }

    return 0;
}