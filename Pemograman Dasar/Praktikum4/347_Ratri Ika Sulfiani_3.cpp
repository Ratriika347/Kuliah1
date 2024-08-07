#include <iostream>
#include <string>
using namespace std;

int main(){
    string kata;
    cout << "Masukkan Kata : ";
    cin >> kata;

    //Menentukan apakah sebuah kata termasuk palindrom
    for(int i = 0; i < kata.length() / 2; i++){
        if(kata[i] != kata[kata.length() - i - 1]){
            cout << "NO" << endl;
            return 0;
        } 
    }
    cout << "YES" << endl;
    return 0;
}