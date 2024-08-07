#include <iostream>
using namespace std;
int main(){

    int i, S, X, N;
    cout << "Input bilangan : ";
    cin >> S >> X >> N;

    if(1 <= S && X && N <= 10000){
        for(i=0; i<=N; i++){
            if(i%2 == 1){
                cout << S + X*i << " ";
            }
            else{
                cout << S - X*i << " ";
            }
        }
    }
return 0;
}