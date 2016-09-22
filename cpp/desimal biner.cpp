#include <iostream>
using namespace std;

int main(){
    int i=0, biner[1000];
    long angka;
    cout<<"Masukkan angka: ";
    cin>>angka;
    do {
        i++;
        biner[i]=angka%2;
        angka/=2;
        } while (angka>0);

    do {
        cout << biner[i];
        i--;
    } while (i>0);
    return 0;
}
