#include<iostream>

double cevir(double);

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    double para;
    cout << "dolara cevrilecek para miktarini gir: ";
    cin >> para;

    cout << cevir(para) << endl;
    

    return 0;
}
double cevir(double q)
{
    return q / 7;
}