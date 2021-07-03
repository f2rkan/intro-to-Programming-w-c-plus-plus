#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    char word[5] = "?ate";
    int deneme = 0;
    for(char ch = 'a'; strcmp(word, "cate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
        deneme++;
    }

    cout << deneme << " donguden sonra aradigimiz kelime: " << word <<endl;
    
    return 0;
}