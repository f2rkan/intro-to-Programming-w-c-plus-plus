#include<iostream>

//constant data

const int Seasons = 4;
const char *Snames[Seasons] = 
{"Spring", "Summer", "Fall", "Winter"};

//diziyi degistirerek kullanacak fonksiyon
void fill(double pa[Seasons]);

//diziyi degistirmeden kullanacak fonksiyon
void show(const double da[Seasons]);

int main(void)
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);

    return 0;
}
void fill(double pa[Seasons])
{
    using namespace std;
    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << " expenses: $";
        cin >> pa[i];
    }
}
void show(const double da[Seasons])
{
    using namespace std;
    double total = 0.0;
    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "total expenses: $" << total << endl;
}