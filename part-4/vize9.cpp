#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    char delimiter[] = "done";
    const int max_length = 50;
    char word[max_length];
    int word_count = 0;

    cout << "kelime girisi yap, done yazarsan program sonlanir.\n";
    cin >> word;

    while(strcmp(word, delimiter))
    {
        word_count++;
        cin >> word;
    }
    cout << "total: " << word_count << endl;
}