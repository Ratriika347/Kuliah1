#include <iostream>
using namespace std;
int main() {

    int a, b;
    cout << "Masukkan bilangan a = ";
    cin >> a;
    cout << "Masukkan bilangan b = ";
    cin >> b;

    if(a<b){
        cout << a << " lebih kecil dari " << b << endl;
    }
    else {
         cout << b << " lebih kecil dari " << a << endl;
    }

}