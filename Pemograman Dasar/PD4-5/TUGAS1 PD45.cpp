#include <iostream>
using namespace std;
int main() {

    int a, b;
    cout << "Masukkan bilangan a = ";
    cin >> a;
    cout << "Masukkan bilangan b = ";
    cin >> b;

    if(a>b){
        cout << a << " BILANGAN TERBESAR dan " << b << " BILANGAN TERKECIL" << endl;   
    }
    else{
        cout << b << " BILANGAN TERBESAR dan " << a << " BILANGAN TERKECIL" << endl;
    }
    
}