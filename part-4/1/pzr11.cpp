#include<iostream>
#include<array>
#include<string>

//constant data
const int Seasons = 4;
const std::array<std::string, Seasons>Snames =
{"Spring", "Summer", "Fall", "Winter"};

//diziyi degistirerek kullanacak fonksiyon
void fill(std::array<double, Seasons>*pa);
//diziyi degistirmeden kullanacak fonksiyon
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
    for(int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> (*pa)[i];
    }
}
void show(std::array<double, Seasons>da)
{
    double total = 0.0;
    for(int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << da[i] << std::endl;
        total += da[i];
    }
    std::cout << "total expenses: $" << total << std::endl;
}