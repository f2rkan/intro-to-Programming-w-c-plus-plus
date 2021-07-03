#include<iostream>
#include<cstring>

char * getname(void);
using namespace std;
int main(void)
{


    char * name;
    name = getname();

    cout << name << " at " << (int *) name << endl;
    delete [] name;

    name = getname();
    cout << name << " at " << (int *) name << endl;
    delete [] name;

    return 0;
}

char * getname(void)
{
    char temp[80];
    cout << "enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn;
}