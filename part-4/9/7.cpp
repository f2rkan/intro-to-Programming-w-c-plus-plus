#include<iostream>
#include<string>

int main(void)
{
    using namespace std;
    string word;
    int sesli, sessiz, hicbiri;
    sesli = sessiz = hicbiri = 0;

    cout << "kelime girisine basla (q to quit): ";
    cin >> word;

    while(cin.good() && word != "q")
    {
        if(isalpha(word[0]))
        {
            if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' || word[0] == 'y')
                sesli++;
            else sessiz++;
        }
        else hicbiri++;

        cin >> word;
    }
    cout << sesli << " sesli; " << sessiz << " sessiz; " << hicbiri << " hicbiri." << endl;

    return 0;

}