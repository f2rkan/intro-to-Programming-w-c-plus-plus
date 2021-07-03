#include<iostream>
#include<time.h>

using namespace std;

class sinif
{
    private:
        int i;
    public:
        void ata()
        {
            srand(time(NULL));
            i = rand() % 10;
        }
        int deger() {return i;}
};

int main(void)
{
    sinif n1, n2;
    n1.ata();

    n2 = n1;
    cout << "1. :" << n1.deger() << endl;
    cout << "2. :" << n2.deger() << endl;

    return 0;
}