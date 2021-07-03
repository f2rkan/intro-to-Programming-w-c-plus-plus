#include<iostream>

int main(void)
{
    using namespace std;
    
    const char * aylar[] =
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
    
    const int years[3] =
    {
        1995,
        1996,
        1997
    };

    int sales[3][12];
    int sum = 0;

    for(int j = 0; j < 3; j++)
    {
        cout << years[j] << " yili icin giris yapiyorsun:\n";
        for(int i = 0; i < 12; i++)
        {
            cout << aylar[i] << " ayindaki satis miktari: ";
            cin >> sales[j][i];
            sum += sales[j][i];
        }
    }
    cout << "toplam satis miktari: " << sum << endl;
    return 0;
}