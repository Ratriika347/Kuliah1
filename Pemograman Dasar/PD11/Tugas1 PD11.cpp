#include <stdio.h>
#include <string.h>

int main() {
    // Batas maksimum panjang string adalah 100
    char string[100];
    char string2[100];
    char string3[100];

    // Menerima input string dari pengguna menggunakan scanf
    printf("Masukkan sebuah string: ");
    scanf("%s", string);
    // Menampilkan hasil scanf (output hanya berupa satu kata)
    printf("String yang dimasukkan: %s\n", string);
    printf("\n");
    
    while (getchar()!='\n');

    // Menerima input string dari pengguna menggunakan gets
    printf("Masukkan sebuah string2: ");
    gets(string2);
    // Menampilkan hasil gets (output berupa kalimat)
    printf("String2 yang dimasukkan: %s\n", string2);
    printf("\n");

    // Menerima input string dari pengguna menggunakan fgets
    printf("Masukkan sebuah string3: ");
    fgets(string3, sizeof(string3), stdin);
    // Menampilkan hasil gets (output berupa kalimat)
    printf("String3 yang dimasukkan: %s\n", string3);
    
    return 0;
}
