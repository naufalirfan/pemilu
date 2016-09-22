#include <stdio.h>
#include <Windows.h>

int main(){
    int angka, i, sisa, pesan;
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    for (i = 0; i < angka; angka--) {
        sisa = angka-1;
        if (sisa == 0){
            printf("\nAnak ayam turun %d, mati satu tinggal induknya", angka);
        } else {
            printf("\nAnak ayam turun %d, mati satu tinggal %d", angka, sisa);
        }
    }
    getch();
}
