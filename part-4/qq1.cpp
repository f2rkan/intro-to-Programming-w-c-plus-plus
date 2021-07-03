#include<iostream>
using namespace std;
#include<string>
#include<cstring>

class Soru
{
    public:
    string Cagir(string str1, string str2)
    {
        string deger = "@";
        deger.append(str1, str2.length(), str1.find_first_of('-'));
        deger.append(str2.substr(4, 2));

        return deger;
    }
    void Cagir2(string str1)
    {
        cout << str1.replace(3, 2, "BM");
    }
};

int main(void)
{
    string deger, str1 = "COVID-19 ortalamasi ";
    string str2 = "Turkiye";
    Soru kk;
    deger = kk.Cagir(str1, str2);
    kk.Cagir2(deger);

    return 0;
}