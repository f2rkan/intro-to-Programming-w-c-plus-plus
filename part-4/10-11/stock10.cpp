#include<iostream>
#include"stock10.h"

Stock::Stock()
{
    std::cout << "default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << "yapicinin kullandigi " << co << " cagirildi\n";
    company = co;

    if(n < 0)
    {
        std::cout << "hisseler negatif olamaz\n"
        << company << " 0'a ayarlandi.\n";
        shares = 0;
    }
    else
        shares = n;
        share_val = pr;
        set_tot();
}
Stock::~Stock()
{
    std::cout << "destructor cagirildi.\n";
}
void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout << "hisseler negatif olamaz.\n"
            << "islem yarida kaldi\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price)
{
    using std::cout;
    if(num < 0)
    {
        cout << "satis islemin negatif olamaz.\nislem yarida kaldi\n";
    }
    else if (num >shares)
    {
        cout << "sahip oldugundan fazlasini satamazsin.\nislem yarida kaldi\n";
    }
    else
    {
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
void Stock::show(void)
{
    using std::cout;
    using std::ios_base;

    //set format to #.###
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    
    std::streamsize prec = cout.precision(3);

    cout <<"Company: " << company << " Shares: " << shares << '\n';
    cout << "  Share price: $" << share_val;

    //set format to #.##
    cout.precision(2);
    cout << "       Total worth: $" << total_val << '\n';

    //restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}