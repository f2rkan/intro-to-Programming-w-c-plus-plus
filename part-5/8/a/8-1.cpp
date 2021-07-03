#include<iostream>

const int MAXLEN = 100;

void repeatString(const char * str, int echo = 0);

int main(void)
{
    using namespace std;

    cout << "enter some characters: ";
    char str[MAXLEN];
    cin.getline(str, MAXLEN);

    cout << "repeatString(str)\t= ";
    repeatString(str);

    cout << "repeatString(str, 1)\t= ";
    repeatString(str, 1);

    cout << "repeatString(str)\t= ";
    repeatString(str);

    cout << "repeatString(str, 1)\t= ";
    repeatString(str, 1);

    cout << "deneme\t= ";
    repeatString(str, 1);

    return 0;
}
void repeatString(const char * str, int echo)
{
    using namespace std;
    static int count = 0;
    count++;

    if(echo == 0)
    {
        cout << str << " aa " << endl;
        return;
    }
    else
    {
        for(int i = 0; i < count; i++)
            cout << str << ' ';
    }

    cout << endl;
    return;
}
