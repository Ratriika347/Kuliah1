#include <iostream>
using namespace std;

int main() {
    float volume_ml, harga_air; 

    cout << "Masukkan volume air yang dibeli =";
    cin >> volume_ml;

    harga_air = (volume_ml/330) * 5000;
    
    cout << harga_air << endl;

}