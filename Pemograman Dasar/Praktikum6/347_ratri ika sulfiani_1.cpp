#include<iostream>
using namespace std;

void rotasi(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x, y;

    //Meminta pengguna untuk memasukkan nilai x dan y
    cout << "Masukkan nilai x : ";
    cin >> x;
    cout << "Masukkan nilai y : ";
    cin >> y;

    rotasi(&x, &y);

    //Menampilkan nilai x dan y setelah dirotasi
    cout << "Nilai setelah dirotasi :" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}