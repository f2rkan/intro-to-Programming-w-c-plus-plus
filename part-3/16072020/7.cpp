#include<iostream>

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "para miktarini gir: ";
    double para;
    cin >> para;

    cout << "para birimini sec:\n\n";
    cout << "1. TL\t2. X\n3. Y\t4. Z\n";
    int birim;
    cin >> birim;
    switch(birim)
    {
        case 1: cout << para / 7;
            break;
        case 2: cout << para / 8;
            break;
        case 3: cout << para / 9;
            break;
        case 4: cout << para / 10;
            break;
        
        default: cout << "yanlis secim.\n";
            break;
    }
    return 0;
}