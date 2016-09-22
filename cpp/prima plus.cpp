#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int angka, a=2, tanda=0;
    cout<<"Masukkan angka: ";
    cin>>angka;
    do {
        if ((angka%a==0 || angka==1) && angka!=2) {
            tanda=1;
            break;
        }
        a++;
    } while (a<=angka/3);
    if (tanda==1){
        cout<<"Bukan Bilangan Prima";
    } else {
        cout<<"Bilangan Prima";
    }
    getch();
    return 0;
}
