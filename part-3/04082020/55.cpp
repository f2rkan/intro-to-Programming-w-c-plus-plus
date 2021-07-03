#include<iostream>

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "bir tamsayi gir: ";
    int sayi; cin >> sayi;

    cout << "counting by " << sayi << "s:\n";
    for(int i = 0; i < 100; i = i + sayi)
    cout << i << endl;

    return 0;
}