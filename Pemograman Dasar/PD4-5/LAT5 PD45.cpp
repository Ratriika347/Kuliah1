#include <iostream>
using namespace std;
int main() {

    float nilai;
    cout << "Masukkan IPK :  ";
    cin >> nilai;
    
    if(nilai <= 0.99){
        cout << " tidak lulus " << endl;
    }
    else if(nilai <= 1.99){
        cout << " mengulang" << endl;
    }
    else if(nilai <= 2.99){
        cout << " baik" << endl;
    }
    else if(nilai <= 3.49){
        cout << " sangat baik" << endl;
    }
    else{
        cout << " sempurna" << endl;
    }
    }