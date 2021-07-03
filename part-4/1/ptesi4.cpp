#include<iostream>
#include<array>
#include<string>
//constant data
const int Season = 4;
const std::array<std::string, Season>Snames =
{"Spring", "Summer", "Fall", "Winter"};

//diziyi degistirmek icin kullanılacak fonksiyon
void fill(std::array<double, Season> *pa);
//diziyi degistimeden kullanacak fonksiyon
void show(std::array<double, Season> da);

//13t5 90
int main(void)
{
    std::array<double, Season>expenses;
    fill(&expenses);
    show(expenses);
    std::cout << "Done.\n";
    return 0;
}
void fill(std::array<double, Season>*pa)
{
    for(int i = 0; i < Season; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> (*pa)[i];
    }
}
void show(std::array<double, Season>da)
{
    double total = 0.0;
    for(int i = 0; i < Season; i++)
    {
        std::cout << Snames[i] << da[i] << std::endl;
        total += da[i];
    }
    std::cout << "Total expenses: $" << total << std::endl;
}

