#include<iostream>

int main(void)
{
    using namespace std;

    const char * months[] =
    {
        "Ocak",
        "Subat",
        "Mart",
        "Nisan",
        "Mayis",
        "Haziran",
        "Temmuz",
        "Agustos",
        "Eylul",
        "Ekim",
        "Kasim",
        "Aralik"
    };
    int sum = 0;
    int sales[12];

    for(int i = 0; i < 12; i++)
    {
        cout << months[i] << " ayindaki satis miktari: ";
        cin >> sales[i];
        sum += sales[i];
    }
    cout << "bu yilki toplam satis miktari: " << sum << endl;

    return 0;
}