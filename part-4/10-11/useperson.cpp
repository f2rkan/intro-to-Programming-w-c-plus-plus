#include<iostream>
#include"person.h"

int main(void)
{
    using std::cout;
    using std::endl;

    Person one;
    Person two("Siminya");
    Person three("Didid", "Kikid");
    
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