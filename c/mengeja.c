#include <stdio.h>
#include <conio.h>
int main(){
    int angka, i, x=-1, print, sementara, kata[20][100], digit[20];
    char pembilang[20][100];
    loop:
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    print=sementara=angka;
    for (i=0; sementara>0; i++){
        digit[i]=sementara%10;
        sementara/=10;x++;
    }
    for (i=0; angka>0; i++){
        switch (digit[i]) {
        case 0 : strcpy(pembilang[i], "nol");break;
        case 1 : strcpy(pembilang[i], "satu");break;
        case 2 : strcpy(pembilang[i], "dua");break;
        case 3 : strcpy(pembilang[i], "tiga");break;
        case 4 : strcpy(pembilang[i], "empat");break;
        case 5 : strcpy(pembilang[i], "lima");break;
        case 6 : strcpy(pembilang[i], "enam");break;
        case 7 : strcpy(pembilang[i], "tujuh");break;
        case 8 : strcpy(pembilang[i], "delapan");break;
        case 9 : strcpy(pembilang[i], "sembilan");break;
        }
        angka/=10;
    }
    strcpy(kata[1], "puluh");
    strcpy(kata[2], "ratus");
    strcpy(kata[3], "ribu");
    strcpy(kata[4], "puluh");
    strcpy(kata[5], "ratus");
    strcpy(kata[6], "juta");
    strcpy(kata[7], "puluh");
    strcpy(kata[8], "ratus");
    for (i=x; print>0; i--){
    printf("%s %s ", pembilang[i], kata[i]);
    print/=10;
    }getch();

    goto loop;
}
