#include<iostream>

using namespace std;

class test
{
    private:
        int sayi;
        int deger() {return sayi; }
    public:
        test(int n) {sayi = n; }
        friend int kare(test & t);     
 };
 
 int kare(test & t)
 {return t.deger() * t.deger(); }
 int main(void)
 {
     //karesi alınacak deger
     test a(8), b(12);

     cout << kare(a) << "\t" << kare(b) << endl;

     return 0;
 }


 