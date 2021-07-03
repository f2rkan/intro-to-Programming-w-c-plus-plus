#include<iostream>

int main(void)
{
    using namespace std;

    enum sett{one, two = 4, three = 45};

    sett qq;
    qq = sett(450);
    cout << qq << endl;
    return 0;
}