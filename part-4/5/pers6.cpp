#include<iostream>
#include<array>
#include<string>

//constant data
const int Seasons = 4;
const std::array<std::string, Seasons>Snames =
{"spring", "summer", "fall", "winter"};

//diziyi deegistirerek islam yapacak olan fonksiyon
void fill(std::array<double, Seasons>*pa);
//fonksiyonu degistirmeden kullanacak olan fonksiyon
void show(std::array<double, Seasons>da);

int main(void)
{
    std::array<double, Seasons>m;
    fill(&m);
    show(m);

    return 0;
}
void fill(std::array<double, Seasons>*pa)
{
    using namespace std;
    for(int i = 0; i < Seasons; i++)
    {
        cout << "enter " << Snames[i] <<" expenses: ";
        cin >> (*pa)[i]; 
    }
}
void show(std::array<double, Seasons>da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    
    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}