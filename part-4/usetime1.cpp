#include<iostream>
#include"mytime1.h"

int main(void)
{
    using std::cout;
    using std::endl;

    Time planning;
    Time coding(4, 55);
    Time fixing(4, 32);
    Time total;

    cout << "Planning time: ";
    planning.Show();
    cout << endl;

    cout << "Coding time: ";
    coding.Show();
    cout << endl;

    cout << "Fixing time: ";
    fixing.Show();
    cout << endl;

    total = coding.operatornew(fixing);
    //operator notation
    cout << "coding - fixing = ";
    total.Show();
    cout << endl;

    Time morefixing(3, 28);
    cout << "more fixing time: ";
    morefixing.Show();
    cout << endl;
    
    total = morefixing.operatornew(total);
    //function notation
    cout << "morefixing.operator-(total) = ";
    total.Show();

    return 0;
}