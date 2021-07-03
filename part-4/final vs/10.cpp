#include<iostream>
using namespace std;

class ornek
{
    private:
        int a, b;
    public:
        ornek();
        friend int topla(ornek &);
};

ornek::ornek()
{
    a = 100;
    b = 200;
}
int topla(ornek & o)
{
    return o.a + o.b;
}

int main(void)
{
    ornek q;
    cout << topla(q) << endl;

    return 0;
}