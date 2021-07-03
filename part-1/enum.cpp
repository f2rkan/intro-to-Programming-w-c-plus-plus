#include<iostream>
using namespace std;

enum{Ilkbahar, Yaz, Sonbahar, Kis};
enum renkDegeri{BEYAZ, SIYAH};


int main(void)
{
    renkDegeri renk = SIYAH;
    cout << Ilkbahar << " "
         << Yaz << " "
         << Sonbahar << " "
         << Kis << endl;
    
    if(renk == SIYAH)
        cout << "beyaz = " << BEYAZ << endl;
    else
        cout << "SIYAH = " << SIYAH << endl;
    
    cout << "renk = " << renk << endl;

    return 0;
}