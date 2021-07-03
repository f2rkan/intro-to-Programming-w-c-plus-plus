#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;
    char delimiter[] = "done";
    int max_length = 50;
    char word[max_length];

    cout << "sozcuk girisi yap, \"done\" yazarsan program sonlanir.\n";
    
    cin >> word;
    int count = 0;
    while(strcmp(word, delimiter))
    {
        count++;
        cin >> word;
    }
    cout << "toplam girdigin kelime sayisi: " << count << endl;
    return 0;    
}