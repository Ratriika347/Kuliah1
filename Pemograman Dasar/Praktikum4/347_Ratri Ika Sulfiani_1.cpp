#include <iostream>
using namespace std;

int main(){
    //Membaca jumlah peserta
    int N;
    cout << "Masukkan jumlah peserta : ";
    cin >> N;

    //Membaca catatan waktu peserta yang terbalik
    int catWaktu[N];
    cout << "Catatan waktu dalam urutan terbalik : " << endl;
    for(int i=0; i < N; i++){
        cin >> catWaktu[i];
    }

    //Mengurutkan catatan waktu peserta
    cout << "Catatan waktu yang tepat : " << endl;
    for(int i = N-1; i >= 0; i--){
        cout << catWaktu[i] << endl;
    }
    return 0;
}