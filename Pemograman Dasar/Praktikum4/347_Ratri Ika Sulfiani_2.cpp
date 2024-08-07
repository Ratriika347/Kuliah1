#include <iostream>
#include <string>
using namespace std;

int main(){
    string jiko;

    cout << "Masukkan jiko : ";
    getline(cin, jiko);

    //Menentukan nama member
    int terakhir = jiko.find_last_of(' ');
    string namaMember = jiko.substr(terakhir+1);
    
    cout << "Nama Member : " << namaMember << endl;
    return 0;
}
