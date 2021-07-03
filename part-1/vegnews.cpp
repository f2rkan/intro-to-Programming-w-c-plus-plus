#include<iostream>
#include"strngbad.h"

using std::cout;

void callme1(StringBad &);
void callme2(StringBad);

int main(void)
{
    using std::endl;
    {
        cout << "bir ic blok baslatiliyor\n";
        StringBad headline1("celery stalks at midnight");
        StringBad headline2("lettuce prey");
        StringBad sports("Spinach Leanes Bowl for Dollars");

        cout << "headline1 = " << headline1 << endl;
        cout << "headline2 = " << headline2 << endl;
        cout << "sports = " << sports << endl;

        callme1(headline1);
        cout << "headline1 = " << headline1 << endl;

        callme2(headline2);
        cout << "headline2 = " << headline2 << endl;

        cout << "bir nesneyi digerinde baslat:\n";
        StringBad sailor = sports;
        cout << "sailor = " << sailor << endl;
        
        cout << "bir nesneyi digerine ata:\n";
        StringBad knot;
        knot = headline1;
        cout << "knot = " << knot << endl;
        cout << "bloktan cikiliyor\n";
    }
    cout << "bloktan cikildi\n";
    return 0;
}

void callme1(StringBad & rsb)
{
    cout << "referans tarafindan iletilen string:\n";
    cout << "   \"" << rsb << "\"";
}

void callme2(StringBad sb)
{
    cout << "degere gore iletilen string:\n";
    cout << "   \"" << sb << "\"\n";
}