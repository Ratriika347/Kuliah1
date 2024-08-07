#include <iostream>
using namespace std;
int main() {
    
    int tugas, partisipasi, uts, uas;
    float bobot_tugas, bobot_partisipasi, bobot_uts, bobot_uas, nilai_akhir;
    
    cout << "Masukkan nilai tugas : ";
    cin >> tugas;
    cout << "Masukkan bobot tugas : ";
    cin >> bobot_tugas;
    cout << "Masukkan partisipasi : ";
    cin >> partisipasi;
    cout << "Masukkan bobot partisipasi : ";
    cin >> bobot_partisipasi;
    cout << "Masukkan nilai uts : ";
    cin >> uts;
    cout << "Masukkan bobot uts : ";
    cin >> bobot_uts;
    cout << "Masukkan nilai uas : ";
    cin >> uas;
    cout << "Masukkan bobot uas : ";
    cin >> bobot_uas;
    
    nilai_akhir = (tugas*bobot_tugas) + (partisipasi*bobot_partisipasi) + (uts*bobot_uts) + (uas*bobot_uas);
    
    cout << "Nilai akhir : " << nilai_akhir << endl;
    
    if (nilai_akhir >= 90){
        cout << "Grade A" << endl;
    }
    else if(nilai_akhir >= 80){
        cout << "Grade B" << endl;
    }
    else if(nilai_akhir >= 70){
        cout << "Grade C" << endl;
    }
    else if(nilai_akhir >= 60){
        cout << "Grade D" << endl;
    }
    else{
        cout << "Grade E" << endl;
    }
}