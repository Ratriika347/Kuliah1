#include <iostream>
using namespace std;
int main(){
    int harga_asli=63, tebakan, M=15, i;
    cout << "Tebak harga outfit dengan range 1-100" <<  endl;
    
    for(i=1; i<=M; i++){
        cout << "Masukkan tebakan : " ;
        cin >> tebakan;    
        
        if (tebakan >= 1 && tebakan <= 100){
            if(harga_asli > tebakan){
                cout << "terlalu kecil" << endl; 
            }
            else if(harga_asli < tebakan){
                cout << "terlalu besar" << endl; 
            }
            else{
                cout << "nah bener lu gw maapin" << endl;
            break;
            }
        }
    }
return 0;
}