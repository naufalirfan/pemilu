#include <stdio.h>
#include <math.h>
#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
    int angka, i, uang=1000, taruhan, tawaran=0;
    char respon;
    cout<<"===================================INTRO===================================\n";
    cout<<"Anda menyumbang sejumlah uang ke sebuah perusahaan, ternyata setelah itu perusahaan nya sukses.\nPerusahaan itu ingin memberikan uang kepada anda sebagai tanda terimakasih,\ndia akan menawarkan sejumlah uang berdasar jumlah sumbangan anda.\nAnda berhak menjawab ya/tidak, jika tidak maka Mr.X akan menawarkan sejumlah uang lagi,\njika iya anda dapat menerima uang tersebut, tapi jika uang tersebut terlalu banyak \ndia akan marah dan tidak jadi memberikan apa-apa kepada anda.";
    cout<<"\n===========================================================================\n";
    cout<<"Uang anda : US$"<<uang;
    cout<<"\nUang sumbangan : US$";
    cin>>taruhan;
    uang-=taruhan;
    tawaran=rand()%taruhan;
    cout<<"menunggu respon perusahaan...";
    Sleep(2000);
    cout<<"\rPerusahaan menawarkan US$"<<tawaran<<" kepada anda.";
    Sleep(500);
    cout<<"\r                                                        ";
    Sleep(1000);
    respon=MessageBox(NULL, "Apakah anda menerima tawaran ini?", "Penawaran", MB_APPLMODAL  | MB_YESNO);
    atas:
    printf("\t\t\t\t\t\t    Uang anda : US$%i\r", uang);
    Sleep(1000); uang+=2;
    printf("test %d", uang);
    goto atas;
    do {
        respon=MessageBox(NULL, "Apakah angka mu lebih besar dari 50?", "Ya atau Tidak", MB_APPLMODAL  | MB_YESNO);
    } while (angka>0);
}
