#include<iostream>

int main(void)
{
    using namespace std;
    enum level
    {
            low, medium, high
    };

    level deneme = medium;
    cout << deneme;

    return 0;
}