#include <iostream>
using namespace std;

//Deklarasi fungsi
void terbesar();
void urut_data();

int main()
{
    int a;

    do {
    //system("clear")
    cout << " \n";
    cout << " \n";
    cout << "---------------------------------------------------------" << endl;
    cout << " \n";
    cout << "   Program apa yang ingin anda gunakan?" << endl;
    cout << "   Input angka dari program di bawah ini" << endl;
    cout << " \n";
    cout << "       1. Menentukan bilangan terbesar" << endl;
    cout << "       2. Mengurutkan bilangan dari yang terkecil" << endl;
    cout << "       0. Keluar" << endl;
    cout << " \n";
    cout << "   Masukkan di sini ---> ";
    cin >> a;
    cout << " \n";
    cout << "---------------------------------------------------------" << endl;
    cout << " \n";

    switch(a){
        case 1:
            terbesar();
            break;
        case 2:
            urut_data();
            break;
        }
    } while(a != 0);

}

void terbesar(){
    int n=0;
    int max=0;

    do {
    cout << "Masukkan bilangan (masukkan 0 untuk berhenti): ";
    cin >> n;

    if (n > max)
        max = n;
    } while (n != 0);

    cout << "Bilangan terbesar adalah " << max << " \n";

}

void urut_data(){
    int A, B, C;
    cout << " \n";
    cout << " \n";
    cout << "Masukkan Bilangan 1: ";
    cin >> A;
    cout << "Masukkan Bilangan 2: ";
    cin >> B;
    cout << "Masukkan Bilangan 3: ";
    cin >> C;

    if (A<B){
      if (B<C)
            cout << A << ", "<< B <<", "<< C << endl;
    else
        if (A<C)
            cout << A << ", " << C << ", " << B << endl;
        else cout << C << ", " << A << ", " << B << endl;
    }else {
    if (A<C)
        cout << B << ", " << A << ", " << C << endl;
    else
        if (B<C)

        cout << B << ", " << C << ", " << A << endl;
    else
        cout << C << ", " << B << ", " << A << endl;
    }

}
