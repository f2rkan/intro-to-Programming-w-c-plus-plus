#include<iostream>
using namespace std;

typedef int tamsayi;
typedef float ondalikSayi;
typedef struct {tamsayi vize1, vize2, final; }sinav;

int main(void)
{
    sinav cemil;
    tamsayi gecmebaraji = 85;
    ondalikSayi ort;

    cemil.vize1 = 40.5;
    cemil.vize2 = 38;
    cemil.final = 56.6;

    ort = cemil.vize1 * 0.2 + cemil.vize2 * 0.8;
    
    cout << "vize 1: " << cemil.vize1 << endl;
    cout << "vize 2: " << cemil.vize2 << endl;
    cout << "final: " << cemil.final << endl;
    cout << "ortalama: " << ort << endl;
    cout << "gecme notu: " << gecmebaraji << endl;

    if(ort > gecmebaraji || ort == gecmebaraji)
        cout << "gecti" << endl;
    else cout << "kaldi" << endl;

    return 0;
}