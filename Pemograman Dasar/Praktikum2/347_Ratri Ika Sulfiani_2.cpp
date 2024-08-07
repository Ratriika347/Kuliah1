#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    1 <= a <= 1000;
    1 <= b <= 1000;
    1 <= c <= 1000;
    cin >> a >> b >> c;
    
    if (1 <= a && b && c <= 1000){
        if(a == b && b == c && a == c){
        cout << "Segitiga Sama Sisi" << endl;
            
        }
        else if(a == b || b == c || a == c){
        cout << "Segitiga Sama Kaki" << endl;
            
        }
        else{
        cout << "Segitiga Sembarang" << endl;
        }
    
    }
    return 0;
}