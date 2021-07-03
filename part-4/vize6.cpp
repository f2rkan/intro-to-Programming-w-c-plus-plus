#include<iostream>
using namespace std;

int main(void)
{
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

    int years[3] =
    {
        2000, 2001, 2002
    };

    int sales[3][12];
    int sum = 0;

    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 12; i++)
        {
            cout << years[j] << " yili, " << months[i] << " ayi icin satis miktari: ";
            cin >> sales[j][i];
            sum += sales[j][i];
        }
    }
    cout << "toplam satis miktari: " << sum << endl;

    return 0;
}