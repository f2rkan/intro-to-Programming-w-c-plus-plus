#include<iostream>

using namespace std;

int main(void)
{
    enum deneme{a, b = 0, c, d = 0};

    cout << "a: " << deneme << endl;

    return 0;
}