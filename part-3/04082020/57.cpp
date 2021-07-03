#include<iostream>
#include<string>

int main(void)
{
    using namespace std;

    cout << "enter a word: ";
    string word; cin >> word;

    //harfleri tersten goruntuleme
    for(int i = word.size() - 1; i >= 0; i--) //son harften sonra null karakter oldugu icin bunu kırmamız gerekiyor yoksa bos slot cıkar, bunu da i'yi esitledikten sonra -1 ekleyerek çözüyoruz.
    cout << word[i];

    return 0;
}