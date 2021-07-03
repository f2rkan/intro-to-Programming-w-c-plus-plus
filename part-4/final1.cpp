#include <iostream>
using namespace std;

class KARMASIK
{
    private:
      double real;
      double imaginal;
    public:
       KARMASIK(): real(0), imaginal(0){ }
       void inpKARMASIK(void)
       {
           cout << "once gercek kismi sonra sanal kismi gir:" << endl;
           cin >> real;
           cin >> imaginal;
       }

       
       KARMASIK operator + (KARMASIK c2)
       {
           KARMASIK sum;
           sum.real = real + c2.real;
           sum.imaginal = imaginal + c2.imaginal;

           return sum;
       }

       void displayKARMASIK(void)
       {
           if(imaginal < 0) cout << "hesaplanan karmasik sayi: "<< real << imaginal << "i";
           else cout << "hesaplanan karmasik sayi: " << real << "+" << imaginal << "i";
       }
};

int main(void)
{
    KARMASIK c1, c2, result;

    cout<<"ilk kompleks sayi icin giris yapiyorsun:\n";
    c1.inpKARMASIK();

    cout<<"ikinci kompleks sayi icin giris yapiyorsun:\n";
    c2.inpKARMASIK();

    result = c1 + c2;
    result.displayKARMASIK();

    return 0;
}