#include <iostream>
using namespace std;

int main(){
    const int pjg_arr = 5;
    int nilai[pjg_arr];

    //mengisi array
    for(int i = 0; i < pjg_arr; i++){
        cout << "Masukkan Nilai Index Ke - " << i << " : ";
        cin >> nilai[i];
    }

    //menampilkan isi
    for(int i = 0; i < 5; i++){
        cout << "Index Ke - " << i << " adalah " << nilai[i] << endl;
    }

return 0;
}