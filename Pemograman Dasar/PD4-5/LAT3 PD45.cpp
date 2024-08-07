#include <iostream>
using namespace std;
int main() {

    int a, b, c;
    //Memasukkan bilangan a, b, dan c
    cout << "Masukkan bilangan a = ";
    cin >> a;
    cout << "Masukkan bilangan b = ";
    cin >> b;
    cout << "Masukkan bilangan c = ";
    cin >> c;
    
    if(a>b && a>c){
        cout << a << " adalah bilangan terbesar" << endl;
    }
    else if(b>a && b>c){
        cout << b << " adalah bilangan terbesar" << endl;
    }
    else if(c>a && c>b){
        cout << c << " adalah bilangan terbesar" << endl;
    }
    }