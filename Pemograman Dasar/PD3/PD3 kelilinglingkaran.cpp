#include <iostream>
using namespace std;
#define phi 3.14159

int main() {
    
    float diameter_cm, keliling;
    cout << "Masukkan Diameter (cm) = ";
    cin >> diameter_cm;

    keliling = phi * diameter_cm;

    cout << "Keliling Lingkaran = " << keliling << " cm " << endl;
}