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
