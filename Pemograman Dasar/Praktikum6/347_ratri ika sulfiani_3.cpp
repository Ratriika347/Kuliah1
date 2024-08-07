#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //Membuka file "codeRedeem.txt" untuk dibaca
    ifstream file("codeRedeem.txt");

    int codeRe = 0;
    int baris = 1;     

    //Membaca bilangan-bilangan dari file satu per satu
    for (int bil; file >> bil; baris++) {
        if (baris % 2 == 1) {  
            codeRe += bil;  
        }
    }

    //Menampilkan hasil
    cout << codeRe << endl;

    //Menutup file setelah selesai membacanya
    file.close();

    return 0;
}