#include <iostream>
using namespace std;

void cariBilTengah(int A[], int T, int& bil1, int& bil2, int& bil3);

int main() {
    //Meminta pengguna untuk memasukkan jumlah test case
    int T;
    cout << " Masukkan jumlah test case : ";
    cin >> T;

    //meminta pengguna untuk memasukkan bilangan
    int A[T];
    cout << "Masukkan bilangan " << endl;
    for (int i = 0; i < T; ++i) {
        cin >> A[i];
    }

    // Memanggil fungsi cariBilTengah
    int bil1, bil2, bil3;
    cariBilTengah(A, T, bil1, bil2, bil3);

    // Mencetak hasil
    cout << bil1 << bil2 << bil3 << endl;

    return 0;
}

//Definisi fungsi untuk mencari bilangan tengah
void cariBilTengah(int A[], int T, int& bil1, int& bil2, int& bil3) {
    bil1 = A[T / 2 - 1];
    bil2 = A[T / 2];
    bil3 = A[T / 2 + 1];
}
