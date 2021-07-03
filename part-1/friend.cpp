#include<iostream>

using namespace std;

class ornek
{
    int a, b;
    public:
        ornek();
        friend int topla(ornek o);
};

ornek::ornek()
{
    a = 100;
    b = 200;
}
int topla(ornek o)
{
    return o.a + o. b;
}

int main(void)
{
    ornek q;
    cout << topla(q) << endl;
}