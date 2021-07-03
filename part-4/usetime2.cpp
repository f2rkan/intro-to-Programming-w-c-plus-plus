#include "mytime2.h"
#include<iostream>

int main(void)
{
    using std::cout;
    using std::endl;

    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "weeding time: ";
    weeding.Show();
    cout << endl;
    
    cout <<"waxing time: ";
    waxing.Show();
    cout << endl;

    total = weeding.operator+(waxing);
    cout << "total time: ";
    total.Show();
    cout << endl;

    diff = weeding.operator+(waxing);
    cout << "diff time: ";
    diff.Show();
    cout << endl;

    adjusted = total * 2;
    cout << "adjusted time: ";
    adjusted.Show();
    cout << endl;

    return 0;
}