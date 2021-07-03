#include<iostream>

int main(void)
{
    using namespace std;

    int * qq = new int;

    int * qw = qq;

    * qw = 17;
    cout << *qw << endl;
    delete qw;
    cout << "reset" << endl;
    cout << *qw << endl;

    return 0;
}