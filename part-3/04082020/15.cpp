#include<iostream>
#include<cstring>

using namespace std;

char * getname(void);

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
    
    char * ps = new char[strlen(temp) + 1];
    strcpy(ps, temp);

    return ps;
}