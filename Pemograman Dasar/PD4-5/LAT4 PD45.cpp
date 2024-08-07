#include <iostream>
using namespace std;
int main() {

    int a, b, hasil_bagi;
    cout << "Masukkan bilangan a = ";
    cin >> a;
    cout << "Masukkan bilangan b = ";
    cin >> b;
    
    if(b==0){
        cout << "tidak dapat dibagi nol" << endl;
    }
    else{
        cout << "hasil pembagian = " << a/b << endl;
    }
    }