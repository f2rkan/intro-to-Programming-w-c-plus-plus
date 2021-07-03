#include<iostream>
using namespace std;

enum{ilk, yaz = 4, sonbahar, kis};
enum renkDegeri{siyah, beyaz};

int main(void)
{
    renkDegeri renk = siyah;
    cout << ilk << ", " << yaz << ", "
        << sonbahar << ", " << kis << endl;
    
    if(renk == siyah)
        cout << "beyaz = " << beyaz << endl;
    else
        cout << "siyah = " << siyah << endl;

        return 0;
}