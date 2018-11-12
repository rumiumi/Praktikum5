#include <iostream>
using namespace std;

int main()
{
  int n;
  
  cout << "Masukkan angka: ";
  cin >> n;
  
  if ( n % 2 == 0)
    cout << n << " adalah angka genap";
  else
    cout << n << " adalah angka ganjil";
  
  return 0;
}
