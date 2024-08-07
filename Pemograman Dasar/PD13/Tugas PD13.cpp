#include <iostream>
using namespace std;

void hanoi(int n, char awal, char tujuan, char bantu) {
    if (n == 1) {
        cout << "Pindahkan balok 1 dari " << awal << " ke " << tujuan << endl;
        return;
    }

    hanoi(n - 1, awal, bantu, tujuan);
    cout << "Pindahkan balok " << n << " dari " << awal << " ke " << tujuan << endl;
    hanoi(n - 1, bantu, tujuan, awal);
}

int main() {
    //Balok A = awal, balok B = bantu dan balok C = tujuan
    int Balok;

    // Meminta pengguna untuk memasukkan jumlah balok
    cout << "Masukkan jumlah balok: ";
    cin >> Balok;

    // Panggil fungsi hanoi
    hanoi(Balok, 'A', 'C', 'B');

    return 0;
}
