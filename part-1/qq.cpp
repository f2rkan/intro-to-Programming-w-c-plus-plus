#include <iostream>
#include <new>
using namespace std;
int main (){
int girsayi, j;
int *pointer;
cout << "Dizi kac eleman sayisi:";
cin >> girsayi;
pointer= new (nothrow) int[girsayi];
if (pointer == 0)
cout << "HATA!!! Hafıza tahsisi basarisiz";
for (int j=0; j<girsayi; j++){
 cout << "Sayilari giriniz: ";
 cin >> pointer[j];
}
for (j=0; j<girsayi; j++)
 cout << pointer[j] << endl;
delete[] pointer;
return 0;
}