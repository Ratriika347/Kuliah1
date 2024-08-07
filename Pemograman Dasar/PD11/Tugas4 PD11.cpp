#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //Mendeklarasikan dan menginisialisasi data
    char kata1[10]="surabaya", kata2[10];
    //copy dari variabel
    strncpy(kata2, kata1, 10);
    cout << kata1 << " " << kata2 << endl;
    
    return 0;
}
