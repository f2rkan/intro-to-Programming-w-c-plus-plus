#include<iostream>
#include<string>

int main(void)
{
    using namespace std;
    string word;
    string delimiter = "done";

    cout << "sozcuk girisine basla, done girersen program sonlanir.\n";
    cin >> word;
    int count = 0;
    while(word != delimiter)
    {
        count++;
        cin >> word;
    }
    cout << "toplam girilen sozcuk sayisi: " << count << endl;

    return 0;
}