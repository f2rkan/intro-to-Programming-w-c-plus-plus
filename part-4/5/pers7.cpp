#include<iostream>
#include<array>
#include<string>

//constant data
const int Seasons = 4;
const std::array<std::string, Seasons>Snames =
{"spring", "summer", "fall", "winter"};

//diziyi degistirerek kullanacak fonksiyon
void fill(std::array<double, Seasons>*pa);
void show(std::array<double, Seasons>da);

int main(void)
{
    std::array<double, Seasons>A;
    fill(&A);
    show(A);

    return 0;
}
void fill(std::array<double, Seasons>*pa)
{
    using namespace std;
    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << " expenses: ";
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
    cout << "total: " << total << endl;
}