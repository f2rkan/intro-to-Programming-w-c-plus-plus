#include<iostream>
#include<string>
#include<cstring>

int main(void)
{
    using namespace std;

    char charr1[20];
    char charr2[20] = "lamborghini";

    string str1;
    string str2 = "prefer";

    str1 = str2;
    strcpy(charr1, charr2);

    int len1 = str1.size();
    int len2 = strlen(charr1);

    strcat(charr1, " text1");
    str1 += " text2";

    cout << charr1 << " dizesinde " << len2 << " karakter var.\n";
    cout << str1 << " dizesinde ise " << len1 << " karakter var." << endl;

    return 0;
}