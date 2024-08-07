#include <iostream>
#include <string>
using namespace std;
int main() {
    
    // Diketahui nama pengguna dan kata sandi
    string user_awal = "abcdefgh";
    string pass_awal = "12345678";
    
    string input_user, input_pass;
    cout << "Masukkan Nama Pengguna : ";
    cin >> input_user;
    cout << "Masukkan Kata Sandi : ";
    cin >> input_pass;
    
    if(input_user==user_awal && input_pass==pass_awal){
        cout << "Welcome " << input_user << endl;
    }
    else{
        cout << "Nama Pengguna atau Kata Sandi yang Anda masukkan tidak cocok. Silahkan coba lagi! " << endl;
    }
}