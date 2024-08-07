#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Masukkan jumlah elemen Deret Fibonacci : ";
    cin >> n;

    int fibonacci[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i < n ; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    cout << "Deret Fibonacci : ";
    for(int i = 0; i < n ; i++){
        cout << fibonacci[i] << " ";
    }

return 0;
}