#include<iostream>

using namespace std;

class deneme
{
    private:
        int sayi;
        int deger() {return sayi; }
    public:
        deneme(int n) {sayi = n; }
        friend int kare(deneme & d);
};

int kare(deneme & d) {return d.sayi * d.sayi; }

int main(void)
{
    deneme q(2), w(5);

    cout << kare(q) << "\t" << kare(w) << endl;

    return 0;
}