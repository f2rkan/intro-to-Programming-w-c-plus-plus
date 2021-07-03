#include<iostream>

using namespace std;

class test
{
    public:
        test(int a = 0);
        void ekrana_yaz() const;
        int y;
    private:
        int x;
        friend void afonk(test t);
};
test::test(int a)
{
    x = a;
    y = 500;
}

void test::ekrana_yaz() const
{
    cout << this -> x << endl;
    cout << (*this).x << endl;
    cout << x << endl;
    cout << &(*this).x << endl;
    cout << this << endl;
}

void afonk(test t)
{
    t.x = 3;
    cout << endl << t.x << endl;
}

int main(void)
{
    test nesne(10);
    nesne.ekrana_yaz();
    
    cout << endl << nesne.y << endl;
    afonk(nesne);

    return 0;
}