#include <stdio.h>
#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
    int satu, dua, tiga, angka, tanda, uang=1000, taruhan;
    float jeda;
    char respon;
    cout<<"===================================SLOT MACHINE===================================\n";
    cout<<"Ini adalah slot machine yang memberikan hadiah random kepada anda,\nbiaya setiap memulai slot adalah $300, modal awal anda adalah US$1000.\nTekan Space untuk menghentikan putaran slot machine\n";
    cout<<"===================================================================================";

    machine:
    tanda=0;jeda=1;
    cout<<"\nBiaya : -$300\n";
    uang-=300;
    satu=rand()%10;dua=rand()%10;tiga=rand()%10;

    random1:
    satu++;dua++;tiga++;satu%=10;dua%=10;tiga%=10;
    cout<<" ["<<satu<<"]["<<dua<<"]["<<tiga<<"]\r";
    if (GetAsyncKeyState(VK_SPACE) & 0x8000){
        tanda=1;
    }
    if (tanda==1){
        jeda+=jeda/9;
    }
    if (jeda>250){
        goto random2;
    } else {
        Sleep(jeda);
        goto random1;
    }

    random2:
    dua++;tiga++;dua%=10;tiga%=10;
    cout<<" ["<<satu<<"]["<<dua<<"]["<<tiga<<"]\r";
    jeda+=jeda/11;
    if (jeda>450){
        goto random3;
    } else {
        Sleep(jeda);
        goto random2;
    }

    random3:
    tiga++;tiga%=10;
    cout<<" ["<<satu<<"]["<<dua<<"]["<<tiga<<"]\r";
    jeda+=jeda/21;
    if (jeda>550){
        goto hasil;
    } else {
        Sleep(jeda);
        goto random3;
    }

    hasil:
    cout<<" ["<<satu<<"]["<<dua<<"]["<<tiga<<"]\r";
    satu*=100;
    dua*=10;
    angka=satu+dua+tiga;
    uang+=angka;
    cout<<"\nAnda memenangkan $\a"<<angka;
    cout<<"\n===================================================================================\n";
    cout<<"Uang akhir anda : $"<<uang;
    Sleep(1000);
    respon=MessageBox(NULL, "Apakah anda akan bertaruh lagi? (biaya US$300)", "Penawaran", MB_APPLMODAL  | MB_YESNO);
    if (respon==IDYES){
        cout<<"\n";
        goto machine;
    }

    tambah:
    cout<<"\rUang akhir anda : $"<<uang;
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
    Sleep(5000);
}
