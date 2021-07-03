#include<iostream>

int main(void)
{
    using namespace std;
    const char * const months[] =
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int volume[3][12];

    int years[3];
    cout << "hangi 3 yil icin islem yapacaginizi girin:\n";
    for(int i = 0; i < 3; i++)
    {
        cout << "year " << i + 1 << ": ";
        cin >> years[i];
    }
    for(int i = 0; i < 3; i++)
    {
        cout << years[i] << " yili icin giris yapiniz:\n";
        for(int j = 0; j < 12; j++)
        {
            cout << months[j] << ": ";
            cin >> volume[i][j];
        }
    }
    int sum = 0;
    int total = 0;

    for(int i = 0; i < 3; i++)
    {
        sum = 0;
        cout << years[i] << " yili raporu: ";
        for(int j = 0; j < 12; j++)
            sum += volume[i][j];
        total += sum;
        cout << sum << endl;
        
    }

    cout << "3 yilin toplaminda elde edilen satis miktari: " << total << endl;

    return 0;
}