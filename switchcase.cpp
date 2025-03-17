#include <iostream>
using namespace std;

float luaspersegipanjang(float a, float b){
    return a * b;
}
float luaslingkaran(float a) {
    return 3.14*a*a;

}

int main(){
    int pilihan;
    float panjang, lebar;
    float jejari;

    do{
        cout << "menu" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. Luas Persegi Panjang" << endl;
        cout << "3. Keluar" << endl;

        cout << "Pilihan (1/2/3) = ";
        cin >> pilihan;


        switch (pilihan)
          {
            case 1: 
                cout << "Hitungan Luas persegi panjang" << endl;
                cout << "Masukkan Panjang = ";
                cin >> panjang;
                cout << "Masukkan lebar = ";
                cin >> lebar;
                cout << "Luas persegi panjang = " << luaspersegipanjang(panjang, lebar) << endl;
                break;
            case 2:
                cout << "Hitung luas lingkaran" << endl;
                cout << "Masukkan jari-jari = ";
                cin >> jejari;
                cout << "Luas lingakaran = " << luaslingkaran(jejari) << endl;
                break;
            case 3:
                 break;
            default:
                 cout << "pilihan barus di antara 1-3.";
                 break;
          }
        }while(pilihan != 3);
     }