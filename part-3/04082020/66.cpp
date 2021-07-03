#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    char word[5] = ".tre";
    
    int deneme_sayisi = 0;
    for(char ch = 'a'; strcmp(word, "ptre"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
        deneme_sayisi++;
    }

    cout << deneme_sayisi << " deneme sayisindan sonra ulastigimiz kelime: " << word << endl;

    return 0;
}