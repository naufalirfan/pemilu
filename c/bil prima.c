#include <stdio.h>
int main(){
    int angka, a=2, x=0;
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    do {
        if ((angka%a==0 || angka==1) && angka!=2) {
            x=1;
            break;
        }
    a++;
    } while (a<=angka/3);
    if (x==1){
        printf("Bukan Bilangan Prima");
    } else {
        printf("Bilangan Prima");
    }
    getch();
}
