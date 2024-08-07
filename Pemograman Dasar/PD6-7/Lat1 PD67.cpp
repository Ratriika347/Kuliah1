#include <iostream>
using namespace std;

int main(){

    int a = 0, hasil = 1, b=2;
    while(a<=6){
        cout << a << " " << hasil << endl;
        hasil *= b;
        a++;
    }

return 0;
}