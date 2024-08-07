#include <stdio.h>
int main() {
    
    int angka;
    //Masukkan sebuah angka
    printf ("Masukkan sebuah angka : ");
    scanf("%d", &angka);

    switch (angka) 
    {   
        case 0 : printf("nol");
            break; 
        case 1 : printf("satu");
            break; 
        case 2 : printf("dua");
            break; 
        case 3 : printf("tiga");
            break; 
        case 4 : printf("empat");
            break; 
        case 5 : printf("lima");
            break; 
        case 6 : printf("enam");
            break; 
        case 7 : printf("tujuh");
            break; 
        case 8 : printf("delapan");
            break; 
        case 9 : printf("sembilan");
            break; 
        
    }
}