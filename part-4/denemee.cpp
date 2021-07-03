#include"deneme.h"
#include<iostream>

int main()
{
    using std::cout;
    using std::endl;

    Time aida(3, 15);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida and Tosca:\n";
    cout << aida<< "; " << tosca << endl;
    
    temp = aida + tosca; //operator+
    cout << "Aida + Tosca: " << temp << endl;
    
    temp = aida * 1.17; //member opereator*()
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;

    return 0;
}