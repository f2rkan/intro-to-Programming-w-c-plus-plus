#include<iostream>
#include"person.h"

int main(void)
{
    using std::cout;
    using std::endl;

    Person one("Safa", "Bahadir");
    Person two("OmerFurkan");
    Person three("Umut", "Cem");

    one.Show();
    cout << endl;
    one.FormalShow();
    cout << endl;
    two.Show();
    cout << endl;
    two.FormalShow();
    cout << endl;
    three.Show();
    cout << endl;
    three.FormalShow();
    cout << endl;

    return 0;
}