#include<iostream>

int main(void)
{
    using namespace std;
    const char * const months[] =
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
    int volume[3][12];
    int year[3];
    
    cout << "islem yapmak istedigin 3 yili gir:\n";
    for(int i = 0; i < 3; i++)
    {
        cout << "#" << i + 1 << ": ";
        cin >> year[i];
    }
    
    for(int i = 0; i < 3; i++)
    {
        cout << year[i] << " yili icin islem yapiyorsun.\n";
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
        cout << year[i] << " raporu: ";
        for(int j = 0; j < 12; j++)
            sum += volume[i][j];
            total += sum;
        
        cout << sum << endl;
    }
    cout << "total: " << total << endl;
    return 0;
}