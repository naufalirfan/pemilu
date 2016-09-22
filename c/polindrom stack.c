#include <stdio.h>
#include <string.h>

void main(){                            //Program utama
    char kata[100];
    int i, sama = 0, panjang;

    printf("Masukkan angka/kata : ");   //Input
    scanf("%s", kata);
    panjang = strlen(kata);

    for (i = 0; i < panjang; i++){      //memasukkan huruf kedalam stack
        push(kata[i]);
    }
    for (i = 0; i < panjang; i++){      //mengeluarkan huruf dari stack sekaligus membandingkannya dgn huruf awal
        if (kata[i] == pop()){
        sama++;
        }
    }
    if (sama == panjang) {              //mengecek banyaknya kesamaan, jika semua sama maka palindrom
        printf("%s adalah Palindrome\n", kata);
    } else {
        printf("%s bukan Palindrome\n", kata);}
    getch();return 0;
}

    char stack[100],masukan;
    int atas = -1;
void push(masukan){                     //Define fungsi pop dan push dalam stack
        stack[++atas] = masukan;
    }
     pop(){
        return(stack[atas--]);
    }
