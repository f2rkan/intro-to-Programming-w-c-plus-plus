#include<iostream>
#include"augmented.h"

using namespace std;

Stock::Stock()
{
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const std::string & co, long n, double pr)
{
    cout << "yapici, " << co << " hisselerini cagirdi.\n";
    company = co;

    if(n < 0)
    {
        cout << "hisseler negatif olamaz." << endl;
        cout << company << " 0'a ayarlandi\n";
        shares = 0;
    }
    else
        shares = n;
        share_val = pr;
        set_tot();
}
Stock::~Stock()
{
    cout << "yikici cagirildi.\n";
}
void Stock::buy(long n, double price)
{
    if(n < 0)
    {
        cout << "satin alma islemi negatif olamaz\n";
        cout << "islem yarida kaldi\n";
    }
    else
        shares += n;
        share_val = price;
        set_tot();
}
void Stock::sell(long n, double price)
{
    if(n < 0)
    {
        cout << "satma islemi negatif olamaz. islem yarida kaldi\n";
    }
    else if (n > shares)
    {
        cout << "sahip oldugundan fazlasini satamazsin.\n";
    }
    else
        shares -= n;
        share_val = price;
        set_tot();
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
void Stock::show(void) const
{
    using std::ios_base;

    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    //set format to #.###
    std::streamsize prec = cout.precision(3);

    cout << "Name: " << company << " Shares: " << shares << "   Share_val: " << share_val;

    //set format to #.##
    cout.precision(2);
    cout << "       Total_worth: " << total_val << endl;

    //set format to original values
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
const Stock & Stock::topval(const Stock & s) const
{
    if(s.total_val > total_val)
        return s;
    else
        return * this;
}