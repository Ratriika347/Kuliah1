#include <iostream>
using namespace std;

int main(){
    int jml_arr, i;
    cout << "Jumlah Mahasiswa : ";
    cin >> jml_arr;
    cout << "====================================" << endl;
    
    int nilai[jml_arr];
    
    for (int i = 0; i < jml_arr; i++){
        cout << "Masukkan Nilai Mahasiswa Ke - " << i + 1 << " : ";
        cin >> nilai[i];
    }
    
    cout << "=====================================" << endl;
    cout << "Syarat Lulus Ujian adalah Nilai diatas 50" << endl;
    cout << "=====================================" << endl;
    cout << "Daftar Mahasiswa yang Lulus Ujian" << endl;

    for (int i = 0; i < jml_arr; i++){
        if(nilai[i] > 50){
         cout <<  "Mahasiswa " << i + 1 << " dengan nilai " << nilai[i] << endl;
        }
    }

return 0;    
} 