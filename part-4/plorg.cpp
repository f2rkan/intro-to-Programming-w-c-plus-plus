#include<iostream>
#include<cstring>
#include"plorg.h"

Plorg::Plorg(const char * name)
{
    std::strncpy(this -> name, name, MAX);
    (this -> name)[MAX - 1] = '\0';
    Cl = 50;
}

void Plorg::changeCl(int Cl)
{
    this -> Cl = Cl;
    return;
}
void Plorg::show() const
{
    using std::cout;
    using std::endl;

    cout << "Name: " << name << endl;
    cout << "Cl: " << Cl << endl;

    return;
}