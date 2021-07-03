#include<iostream>
#include<string>

int main(void)
{
    using namespace std;
    string metin;
    cout << "metni gir:\n";
    int i = 0;
    getline(cin, metin);
    

    while(metin[i] != '\n')
    {
        if(metin[i] == '\n') cin.ignore(1000);
        metin[i] = ' ';
        if(metin[i] == 'q' && metin[i+1] == 'q' && metin[i+2] == 'q')
        break;
        i++;
    }
    cout << metin;
}