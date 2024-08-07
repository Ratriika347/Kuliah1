#include <iostream>
using namespace std;
int main(){
    int i,N;
    cout << "Masukkan bilangan bulat : ";
    cin >> N;

    if(1 <= N <= 1000000){
        cout << "Faktor dari " << N << " adalah " << endl;
        for(i<=N; i>=1; i--){
            if(N % i == 0){
                cout <<  i << endl;    
            } 
        }
    }
return 0;
}