#include<iostream>

int main(void)
{
    using namespace std;

    enum deneme {one, two, three};
    deneme xx;
    xx = deneme(400058);
    cout << xx << endl;

    cout << sizeof deneme << endl;
    return 0;
}