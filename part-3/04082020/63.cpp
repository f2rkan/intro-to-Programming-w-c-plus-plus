#include<iostream>
#include<string>

int main(void)
{
    using namespace std;

    string word;
    cout << "metin gir, tersine cevirecegiz: ";
    cin >> word;
    
    char temp;
    int i, j;
    for(j = 0, i = word.size() - 1; j < i; --i, j++)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }

    cout << "guncel metin: " << word << endl;

    return 0;
}