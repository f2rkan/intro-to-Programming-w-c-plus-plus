#include<iostream>

int main(void)
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donut's value: " << donuts << " and donut's address: " << &donuts << endl;
    cout << "cup's value: " << cups << " and cup's address: " << &cups << endl;

    return 0;
}