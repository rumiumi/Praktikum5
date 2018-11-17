#include <iostream>
#include "fungsi.h"

using namespace std;

int main()
{
    int a;

    do {
    cout << " \n";
    cout << " \n";
    cout << "---------------------------------------------------------" << endl;
    cout << " \n";
    cout << "   Program apa yang ingin anda gunakan?" << endl;
    cout << "   Input angka dari program di bawah ini" << endl;
    cout << " \n";
    cout << "       1. Menghitung Luas persegi panjang" << endl;
    cout << "       2. Menentukan angka ganjil/genap" << endl;
    cout << "       3. Menentukan bilangan terbesar" << endl;\
    cout << "       4. Mengurutkan bilangan dari yang terkecil" << endl;
    cout << "       5. Menentukan jenis segitiga dari panjang sisi-sisinya" << endl;
    cout << "       6. Belanja di Indoapril" << endl;
    cout << "       0. Keluar" << endl;
    cout << " \n";
    cout << "   Masukkan di sini ---> ";
    cin >> a;
    cout << " \n";
    cout << "---------------------------------------------------------" << endl;
    cout << " \n";

    switch(a){
        case 1:
            Lpp();
            break;
        case 2:
            ganjilgenap();
            break;
        case 3:
            terbesar();
            break;
        case 4:
            urut_data();
            break;
        case 5:
            segitiga();
            break;
        case 6:
            indoapril();
            break;
        }
    } while(a != 0);

    return 0;
}
