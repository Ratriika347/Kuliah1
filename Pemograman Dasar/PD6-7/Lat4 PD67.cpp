#include <iostream>
using namespace std;

int main(){

    int a = 2, b, hasil = 1, i = 1;
    cout << "Menampilkan hasil pangkat dengan absis dua" << endl;
    cout << "Masukkan nilai pangkat : ";
    cin >> b;
    
    while(i <= b){
        hasil *= a;
        i++;
    }
    cout << "Hasil dari 2^" << b << " adalah " << hasil << endl;

return 0;
}