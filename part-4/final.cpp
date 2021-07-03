//Kütüphaneler tanımlanıyor.
#include"stdafx.h"
#include <iostream>
using namespace std;
#include <conio.h>

//Karmaşık sayı yapısı tanımlanıyor.
struct complex
{
     float reel;
     float imaginary;
}c1,c2;


//Operatörler tanımlanıyor.
complex operator + (complex c1,complex c2)
{
 complex result;
 result.reel = c1.reel + c2.reel;
 result.imaginary = c1.imaginary + c2.imaginary;
 return result;
}

complex operator -(complex c1, complex c2)
{
 complex result;
    result.reel = c1.reel - c2.reel;
 result.imaginary = c1.imaginary - c2.imaginary;
 return result;
}

complex operator *(complex c1, complex c2)
{
 complex result;
 result.reel = c1.reel*c2.reel - c1.imaginary*c2.imaginary;
 result.imaginary = c1.reel*c2.imaginary + c1.imaginary*c2.reel;
 return result;
}

complex operator /(complex c1, complex c2)
{
 complex result;
 result.reel = c1.reel*c2.reel + c1.imaginary*c2.imaginary;
 result.imaginary =c1.imaginary*c2.reel - c1.reel*c2.imaginary;
 return result;
}

//Main başlangıcı.
int main()
{


 //Yerel değişkenler tanımlanıyor.
 complex a1,a2,a3;
 int process;
 int again;


 //Kullanıcıdan sayılar ve yapılacak işlem alınıyor.
 cout<<"1.Number's Reel:";
 cin>>a1.reel;
 cout<<"1.Number's Imaginary:";
 cin>>a1.imaginary;
 
 cout<<endl<<"Enter Process: + - * /"<<endl;
 cin>>process;
 
 cout<<"2.Number's Reel:";
 cin>>a2.reel;
 cout<<"2.Number's Imaginary:";
 cin>>a2.imaginary;

//Switch yapısı başlangıcı.
 switch(process)
 {
 //Topla.
 case 1:
  a3=a1 + a2;
  break;
 //Çıkar.
 case 2:
  a3 = a1 - a2;
  break;
 //Çarp.
 case 3:
  a3 = a1 * a2;
  break;
 //Böl.
 case 4:
 a3 = a1 / a2;
 break;
 default:
 return 0;
 break;
 }
    //Switch yapısı sonu.

 //Sonucu göstermek için fonksiyon çağırılıyor.
void show(float a3.reel, float a3.imaginary);
void show(struct complex a3);
show (a3);
show(a3.reel, a3.imaginary);


//Tekrar etme seçeneği.
 cout<<endl<<"If you want to do  the process again, press 0";
 cin>>again;
 if(again==0)
 main();
 getch();
 return 0;
}


//Sonuç gösterme fonksiyonu.
void show(struct complex a3)
{
     cout<<endl<<"Result:"<<a3.reel<<"+"<<a3.imaginary<<"i";
}

void show(float a3.reel, float a3.imaginary)
{
     cout<<endl<<"Result:"<<a3.reel<<"+"<<a3.imaginary<<"i";
}