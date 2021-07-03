#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string delimiter = "done";
    string word;
    int word_count = 0;
    cout << "kelime girisi yap, done yazarsan prg sonlanir.\n";
    cin >> word;

    while(word != delimiter)
    {
        word_count++;
        cin >> word;
    }
    cout << "giris yapilan kelime sayisi: " << word_count << endl;

    return 0;
}