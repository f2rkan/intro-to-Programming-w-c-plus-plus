#include<iostream>
using namespace std;

void show_menu();
void ilk_kita();
void ikinci_kita();
void ucuncu_kita();
void dorduncu_kita();

int main(void)
{
    

    int secim;
    cout << "İstiklal Marsi'nin kacinci kitasini yazalim: ";
    cin >> secim;

    while(secim != 5)
    {
        switch(secim)
        {
            case 1 : ilk_kita();
                break;
            case 2 : ikinci_kita();
                break;
            case 3: ucuncu_kita();
                break;
            case 4 : dorduncu_kita();
                break;
            default : cout << "yanlis bir secim yaptin, tekrar dene: ";
        }
        show_menu();
            cin >> secim;
    }

    cout << "bitti\n";
    return 0;
}
void show_menu()
{
    cout << "kacinci kita okunsun:\n"
         << "1) korkma\t2) catma\n"
         << "3) ezelden beridir\t4) garbin afakini\n";
}
void ilk_kita()
{
    cout << "xxxxx\n";
}
void ikinci_kita()
{
    cout << "yyyy\n";
}
void ucuncu_kita()
{
    cout << "zzzzz\n";
}
void dorduncu_kita()
{
    cout << "qqqqqq\n";
}