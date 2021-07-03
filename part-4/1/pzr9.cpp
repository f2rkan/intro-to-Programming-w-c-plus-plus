#include<iostream>
#include<array>
#include<string>

//constant data
const int Seasons = 4;
const std::array<std::string, Seasons>Snames =
{
    "Spring", "Summer", "Fall", "Winter"
};
//diziyi degistirmek icin kullanılacak fonksiyon
void fill(std::array<double, Seasons>*pa);
//diziyi degistirmeden kullanılacak fonksiyon
void show(std::array<double, Seasons>da);

int main(void)
{
    std::array<double, Seasons>expenses;
    fill(&expenses);
    show(expenses);

    return 0;
}
void fill(std::array<double, Seasons>*pa)
{
    using namespace std;
    for(int i = 0; i < Seasons; i++)
    {
        cout << "enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}
void show(std::array<double, Seasons>da)
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