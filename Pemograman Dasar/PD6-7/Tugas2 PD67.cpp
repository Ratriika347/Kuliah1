#include <iostream>
using namespace std;

int main(){

    int a, b, n; 
    cout << "Masukkan nilai n : ";
    cin >> n;    

    for(a=n;a>=1;a--){
        for(b=1;b<=a;b++){
        cout << a;   
        }
    cout << endl;
    }
    
return 0;
}
