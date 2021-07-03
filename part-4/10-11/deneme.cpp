#include<iostream>
#include"deneme.h"

using namespace std;
Stock::Stock()
{
    cout << "default yapici cagirildi\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::~Stock()
{
    cout << "yikici cagirildi\n";
}
Stock::Stock(const std::string & co, long n, double pr)
{
    company = co;
    cout << "yapicinin cagirdigi " << company << " isleniyor:\n";
    
    if(n < 0)
    {
        cout << "hisse negatif olamaz.\n" << company << " 0'a ayarlandi.\n";
        shares = 0;
    }
    else
        shares = n;
        share_val = pr;
        set_tot();
}
void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        cout << "satis islemi negatif olamaz.\n";
    }
    else
        shares += num;
        share_val = price;
        set_tot();
}
void Stock::sell(long num, double price)
{
    if(num < 0)
        cout << "satin alma islemi negatif olamaz" << endl;
    else if(num > shares)
        cout << "sahip oldugundan fazlasini satamazsin" << endl;
    else
        shares -= num;
        share_val = price;
        set_tot();
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
void Stock::show(void)
{
    using std::ios_base;

    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    //set format to #.##
    std::streamsize prec =
    cout.precision(3);

    cout << "Name: " << company << ", Shares: $" << shares << "     Share val: $" << share_val;

    //set format to #.##
    cout.precision(2);
    cout << "       Total worth: $" << total_val << endl;

    //original
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
