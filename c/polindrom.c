#include <stdio.h>
#include <string.h>

int main(){
    char kata[100];
    int i, panjang, bukan = 0;

    printf("Masukkan Kata/angka : ");   //input kata
    scanf("%s", kata);
    panjang = strlen(kata) - 1;         //mendapatkan panjang kata

    for(i=0;i <= panjang/2 ;i++){       //membandingkan karakter
        if(kata[panjang-i] != kata[i]){ //awal dan akhir apakah sama
            bukan = 1; break;
        }
    }
    if (bukan == 1) {                   //Menampilkan hasil apakah palindrom atau bukan
        printf("%s bukan palindrome", kata);
    } else {
        printf("%s adalah palindrome", kata);
    } getch(); return 0;
}
