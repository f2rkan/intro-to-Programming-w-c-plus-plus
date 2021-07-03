#include<iostream>
#include"a.h"

int main(void)
{
    using std::endl;
    using std::cout;

    
    Time planning;
    Time coding(1, 70);
    Time exits(7, 45);
    Time total;

    cout << "planning: ";
    planning.Show();
    cout << endl;

    cout << "coding: ";
    coding.Show();
    cout << endl;

    cout << "exits: ";
    exits.Show();
    cout << endl;

    cout << "coding.sum(exits): ";
    total = coding.sum(exits);
    total.Show();
    cout << endl;


    return 0;
}