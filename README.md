# Praktikum5

## Latihan 1: Fungsi Sederhana

**Alur Algoritma**
1. Deklarasikan fungsi ` int sum(int,int); `
2. Deklarasikan fungsi ` float bagi(int a, int b){return a/b; }`
3. Dalam program utama panggil fungsi ` cout << sum(1,99) `
4. Deklarasikan variabel ` int a, b ` lalu input ` cin >> a >> b ` lalu panggil fungsi ` cout << sum(a, b) `
5. Deklarasikan variabel berisi fungsi ` int c = sum(A, 10) ` lalu cetak ` cout << c `
6. Panggil fungsi ` cout << bagi(a,b) `
7. Definisikan isi fungsi yang dideklarasikan sebelum program utama/fungsi utama tanpa definisi

**Berikut code lengkapnya**

```
#include <iostream>
using namespace std;

//deklarasi fungsi
int sum(int,int);

float bagi(int a, int b) {
    return a/b;
}

//fungsi utama
int main(){

  //memanggil fungsi
  cout << sum(1,99) << endl;

  int a, b;
  cin >> a >> b;
  cout << sum(a, b) << endl;

  int c = sum(a, 10);
  cout << c << endl;

  cout << bagi(a,b) << endl;

  return 0;
}

/* fungsi didefinisikan setelah fungsi utama */
int sum(int num1, int num2){
    int num3 = num1+num2;
    return num3;
}

```


## Latihan 2: Mengumpulkan Program-Program yang Telah Dibuat Sebelumnya dalam Satu Program

**Alur Algoritma**

1. Deklarasikan fungsi ` void Lpp(); void genapganjil(); void terbesar(); void urut_data(); void segitiga(); void indoapril() `
2. Dalam program utama, tampilkan pesan pembuka
3. Beri persimpangan untuk isi dari variabel input ` switch(a) `
4. Beri nama ` case ` dengan angka inputan dan isi dengan nama fungsi
5. Ulangi dari langkah ke-2 sampai ` a != 0 `
6. Definisikan fungsi-fungsi yang dideklarasikan sebelum program/fungsi utama

**Berikut code lengkapnya**

```
#include <iostream>

using namespace std;

void Lpp();
void ganjilgenap();
void terbesar();
void urut_data();
void segitiga();
void indoapril();

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


void Lpp(){
  int p, l;

  cout << "           [Menghitung luas persegi panjang] \n";
  cout << " \n";
  cout << " \n";

  cout << "Masukkan p: ";
  cin >> p;
  cout << "Masukkan l: ";
  cin >> l;

  cout << " \n";
  cout << "Luas = ";
  cout << p * l;
}

void ganjilgenap(){
  int n;

  cout << "         [Menentukan angka ganjil/genap] \n";
  cout << " \n";
  cout << " \n";
  cout << "Masukkan angka: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " adalah angka genap";
  else
    cout << n << " adalah angka ganjil";
}

void terbesar(){
    int n;
    int max=0;
    int i=0;

    cout << "           [Menentukan bilangan terbesar] \n";
    cout << " \n";
    cout << " \n";
    cout << "Petunjuk:";
    cout << " \n";
    cout << "Masukkan bilangan-bilangan yang Anda inginkan. \n";
    cout << "Masukkan angka 0(nol) untuk berhenti. \n";
    cout << " \n";

    do {
    i = i+1;

    if (i!=1){
        cout << "Masukkan bilangan ke-" << i << ": ";
    }else{
        cout << "Masukkan bilangan pertama: ";
    }

    cin >> n;

    if (n > max)
        max = n;
    } while (n != 0);

    cout << "Bilangan terbesar dari " << i << " bilangan-bilangan di atas adalah " << max;

}

void urut_data(){
    int A, B, C;
    cout << "         [  Mengurutkan Angka dari yang  ] \n";
    cout << "         [   Terkecil ke yang Terbesar   ] \n";
    cout << " \n";
    cout << " \n";
    cout << "Masukkan Bilangan 1: ";
    cin >> A;
    cout << " \n";
    cout << "Masukkan Bilangan 2: ";
    cin >> B;
    cout << " \n";
    cout << "Masukkan Bilangan 3: ";
    cin >> C;
    cout << " \n";

    if (A<B){
        if (B<C){
            cout << "Diurutkan menjadi ";
            cout << A << ", "<< B <<", "<< C << endl;
        }else{
            if (A<C){
                cout << "Diurutkan menjadi ";
                cout << A << ", " << C << ", " << B << endl;
            }else {
                cout << "Diurutkan menjadi ";
                cout << C << ", " << A << ", " << B << endl;
            }
        }
    }else{
        if (A<C){
            cout << "Diurutkan menjadi ";
            cout << B << ", " << A << ", " << C << endl;
        }else{
            if (B<C){
                cout << "Diurutkan menjadi ";
                cout << B << ", " << C << ", " << A << endl;
            }else{
                cout << "Diurutkan menjadi ";
                cout << C << ", " << B << ", " << A << endl;
            }
        }
    }

}

void segitiga(){
    int a, b, c;

    cout << "          [ Menentukan jenis segitiga dari ] \n";
    cout << "          [      Panjang sisi-sisinya      ] \n";
    cout << " \n";
    cout << " \n";
    cout << "Panjang sisi A: ";
    cin >> a;

    cout << " \n";
    cout << "Panjang sisi B: ";
    cin >> b;

    cout << " \n";
    cout << "Panjang sisi C: ";
    cin >> c;
    cout << " \n";
    cout << " \n";

    if (a==b && a==c){
        cout << "Berdasarkan panjang sisi-sisinya, segitiga tersebut merupakan segitiga sama sisi.";
    } else {
        if (a==b || a==c) {
            cout << "Berdasarkan panjang sisi-sisinya, segitiga tersebut merupakan segitiga sama kaki.";
        } else {
            cout << "Berdasarkan panjang sisi-sisinya, segitiga tersebut merupakan segitiga sembarang.";
        }
    }
}

void indoapril(){
    int N, a, b, d, hb;
    int e = 0;
    int i = 0;
    float dis = 0.0;
    int total = 0;
    int stotal = 0;

    cout << "                 Selamat datang \n";
    cout << "                        di \n";
    cout << "                    Indoapril \n";
    cout << " \n";
    cout << " \n";
    cout << "--------------------------------------------------- \n";
    cout << "--------------------------------------------------- \n";
    cout << " \n";
    cout << "Berapa macam barang yang akan Anda beli? \n";
    cin >> N;
    cout << " \n";

    do {
    cout << "Berapa barang yang akan Anda beli? \n";
    cin >> a;
    cout << " \n";
    cout << "Berapa harga per satuan barang yang Anda beli? \n";
    cout << "(Jangan gunakan titik atau koma) \n";
    cout << "Rp ";
    cin >> b;
    cout << " \n";

    hb = a * b;
    stotal = stotal+hb;
    e = e+a;
    i = i+1;

    cout << " \n";
    cout << "Harga barang tersebut adalah Rp " << hb << ",- \n";

    if (i < N){
        cout << "Barang ke-" << i << " dari " << N << " barang yang akan dibeli \n";
    } else {
        cout << "Anda telah membeli " << N << " barang";
    }

    cout << " \n";
    cout << " \n";

    } while (i < N);

    if (stotal >= 1000000){
        dis = (stotal/100)*10;
        total = stotal-dis;
        d = 10;
    } else {
        if (stotal > 500000){
            dis = (stotal/100)*5;
            total = stotal-dis;
            d = 5;
        } else {
            total = stotal;
            d = 0;
        }
    }

    cout << "--------------------------------------------------- \n";
    cout << "--------------------------------------------------- \n";
    cout << " \n";

    cout << "Jumlah item: " << N << " \n";
    cout << "Jumlah barang: " << e << " \n";
    cout << "Total belanja: Rp " << stotal << ",- \n";
    cout << "Discount: " << d << "% \n";
    cout << "Total: Rp " << total << ",- \n";
    cout << " \n";
    cout << " \n";
    cout << "                  Terima kasih \n";
    cout << "             Jangan datang kembali \n";

}

```

## Latihan 3: Memanggil file .h (Header)

**Alur Algoritma**

1. Deklarasikan file yang akan ditautkan dalam program ` #include "fungsi.h" `
2. Dalam program utama, tampilkan pesan pembuka
3. Beri persimpangan untuk isi dari variabel input ` switch(a) `
4. Beri nama ` case ` dengan angka inputan dan isi dengan nama fungsi
5. Ulangi dari langkah ke-2 sampai ` a != 0 `

**Berikut code lengkapnya**

```
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

```