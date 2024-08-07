#include<iostream>
using namespace std;

void rotasi(int* a, int* b, int* c) {
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main() {
    int a, b, c;

    //Meminta pengguna untuk memasukkan nilai a, b dan c
    cout << "Masukkan nilai a : ";
    cin >> a;
    cout << "Masukkan nilai b : ";
    cin >> b;
    cout << "Masukkan nilai c : ";
    cin >> c;

    rotasi(&a, &b, &c);

    //Menampilkan nilai a, b dan c setelah dirotasi
    cout << "Nilai setelah dirotasi :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}