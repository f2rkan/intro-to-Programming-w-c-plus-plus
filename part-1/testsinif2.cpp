#include<iostream>

using namespace std;

class test
{
    private:
        int a, b;
    public:
        test(int i, int j);
        ~test();
        void yaz();
};

test::test(int i, int j)
{
    a = i;
    b = j;
}
test::~test()
{}

void test::yaz()
{
    cout << "birinci degisken: " << a << endl;
    cout << "ikinci degisken: " << b << endl;
}

int main(void)
{
    test q(100, 200);
    q.yaz();

    return 0;
}