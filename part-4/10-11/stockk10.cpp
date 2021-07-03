#include<iostream>
#include "stockk10.h"

using namespace std;

Stock::Stock()
{
    cout << "default yapici cagirildi.\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::~Stock()
{
    cout << "yikici cagirildi\n";
}
Stock::Stock(const std::string & co, long n, double price)
{
    cout << "yapici,  " << co << "'yi cagirdi.\n";
    company = co;

    if(n < 0)
    {
        cout << "hisseler negatif olamaz\n";
        cout << company << " 0'a ayarlandi.\n";
        shares = 0;
    }
    else
        shares += n;
        share_val = price;
        set_tot();
}

void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        cout << "satin alma islemi negatif olamaz.\nislem yarida kaldi.\n";
    }
    else
        shares += num;
        share_val = price;
        set_tot();
}
void Stock::sell(long num, double price)
{
    if(num < 0)
    {
        cout << "satma islemi negatif olamaz\nislem yarida kaldi\n";
    }
    else if (num > price)
    {
        cout << "sahip oldugundan fazlasini satamazsin.\nislem yarida kaldi\n";
    }
    else
        share_val = price;
        set_tot();
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
void Stock::show()
{
    using std::ios_base;

    //set format to #.###
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);

    std::streamsize prec = cout.precision(3);
    cout << "Name: " << company << " Shares: " << shares
    << "    Share price: $" << share_val;

    //set format to #.##
    cout.precision(2);
    cout << "       Total worth: $" << total_val << endl;

    //restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}