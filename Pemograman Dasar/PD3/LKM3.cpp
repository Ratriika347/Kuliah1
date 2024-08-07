#include <iostream>
using namespace std;

int main() {
    
    //Pengguna memasukkan jumlah pembelian tanpa tanda titik
    float harga_barang, keuntungan;
    cout << "Jumlah Pembelian = Rp ";
    cin >> harga_barang;

    keuntungan = 0.3 * harga_barang;

    cout << "Keuntungan Penjualan = Rp " << keuntungan << endl;
}