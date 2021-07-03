#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    char deneme[10] = "?ate";
    char ch;

    for(ch = 'a'; strcmp(deneme, "mate"); ch++)
    {
        cout << deneme << endl;
        deneme[0] = ch;
    }

    cout << "aranilan kelime: " << deneme << endl;

    return 0;
}