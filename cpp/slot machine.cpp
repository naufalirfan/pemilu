#include <stdio.h>
#include <math.h>
#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
    int satu, dua, tiga, angka, tanda, uang=1000, taruhan;
    float jeda;
    char respon;
    cout<<"===================================SLOT MACHINE===================================\n";
    cout<<"Ini adalah slot machine yang memberikan hadiah random kepada anda,\nbiaya setiap memulai slot adalah US$300, modal awal anda adalah US$1000.\n";
    cout<<"===================================================================================\n";
    machine:
    tanda=0;jeda=1;
    cout<<"Biaya : -US$300\n";
    uang-=300;
    random:
    satu=rand()%9;
    dua=rand()%9;
    tiga=rand()%9;
    cout<<"["<<satu<<"]["<<dua<<"]["<<tiga<<"]\r";
    if (GetAsyncKeyState(VK_SPACE) & 0x8000){
        tanda=1;
    }
    if (tanda==1){
        jeda+=jeda/8;
    }
    if (jeda>500 && tanda==1){
        goto hasil;
    } else {
        Sleep(jeda);
        goto random;
    }
    hasil:
    cout<<"["<<satu<<"]["<<dua<<"]["<<tiga<<"]\r";
    satu*=100;
    dua*=10;
    angka=satu+dua+tiga;
    uang+=angka;
    cout<<"\nAnda memenangkan US$"<<angka;
    cout<<"\n===================================================================================\n";
    cout<<"Uang akhir anda US$"<<uang<<"\n";
    Sleep(1000);
    respon=MessageBox(NULL, "Apakah anda akan bertaruh lagi? (biaya US$300)", "Penawaran", MB_APPLMODAL  | MB_YESNO);
    if (respon==IDYES){
        goto machine;
    }
    tambah:
    cout<<"\rUang akhir anda : US$"<<uang<<"";
    respon=MessageBox(NULL, "Apakah anda ingin menambah uang?", "Penawaran", MB_APPLMODAL  | MB_YESNO);
    if (respon==IDYES){
        Sleep(10); uang+=2;
        goto tambah;
    }
    respon=MessageBox(NULL, "Apakah anda ingin lanjut main?", "Penawaran", MB_APPLMODAL  | MB_YESNO);
    if (respon==IDYES){
        cout<<"\n";
        goto machine;
    }
    cout<<"\nSelamat tinggal...";
    Sleep(2000);
}
