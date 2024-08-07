#include <iostream>
using namespace std;

int main(){
    
    int a = 2, b, hasil = 1, i = 1;
    
    cout << "Menampilkan hasil pangkat dengan absis dua" << endl;
    cout << "Masukkan nilai pangkat : ";
    cin >> b;
    
    for(i=1; i <= b; i++){
        hasil *= a;
    }
    cout << "Hasil dari 2^" << b << " adalah " << hasil << endl;

return 0;
}