#include <iostream>
#include <math.h>
using namespace std;

// Prototipe fungsi
double permutasi(int n, int r);
double kombinasi(int n, int r);

int main() {
    int n, r;

    cout << "PROGRAM UNTUK MENGHITUNG HASIL PERMUTASI DAN KOMBINASI" << endl;
    cout << "==================================================" << endl;

    // Meminta pengguna memasukkan nilai n dan r
    cout << "Masukkan nilai n : ";
    cin >> n;
    cout << "Masukkan nilai r : ";
    cin >> r;
    
    cout << "==================================================" << endl;
    cout << "Hasil perhitungan permutasi dan kombinasi " << endl;
    
    // Hasil perhitungan permutasi
    cout << "Permutasi dari P (" << n << "," << r << ") adalah " << permutasi(n, r) << endl;

    // Hasil perhitungan kombinasi
    cout << "Kombinasi dari C (" << n << "," << r << ") adalah " << kombinasi(n, r) << endl;
    
    if (permutasi(n,r) == 0 && kombinasi(n,r) == 0){
        cout << "Nilai yang di inputkan salah " << endl;
    }

    return 0;
}

// Fungsi permutasi
double permutasi(int n, int r) {
    if (n >= r && (n && r >= 0)) {
        return tgamma(n + 1) / tgamma(n - r + 1);
    } else {
        return 0; // Nilai invalid
    }
}

// Fungsi kombinasi
double kombinasi(int n, int r) {
    if (n >= r && (n && r >= 0)) {
        return tgamma(n + 1) / (tgamma(r + 1) * tgamma(n - r + 1));
    } else {
        return 0; // Nilai invalid
    }
}
