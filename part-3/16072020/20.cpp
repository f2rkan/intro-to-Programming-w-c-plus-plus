#include<iostream>

int main(void)
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "enter your weight in pounds: ";
        cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;

    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s).\n";

    return 0;
}