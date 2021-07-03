#include<iostream>

using namespace std;

class azaltma
{
    public:
        int x, y;
        azaltma() {x = 0; y = 0; }
        azaltma(int, int);
        void isle(int & a1, int & a2)
        {
            a1 = x;
            a2 = y;

        }
        azaltma operator--();
};

azaltma::azaltma(int a, int b) {x = a; y = b; }

azaltma azaltma::operator--()
{
    x--;
    y--;
}

int main(void)
{
    azaltma az(7, 10);
    int az1, az2;

    --az;
    az.isle(az1, az2);

    cout << "(" << az1 << ", " << az2 << ")";

    return 0;
}