#include<iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(void)
{
    using namespace std;

    inflatable guests[2] =
    {
        {"ali", 1.22, 3.44},
        {"veli", 5.33, 21.33}
    };

    cout << "the guests " << guests[0].name << " and "
         << guests[1].name << "\nhave a combined volume of "
         << guests[0].volume + guests[1].volume << " cubic feet.\n";

    cout << endl << endl;
    cout << "struct size: " << sizeof(inflatable) << endl;
    

    cout << endl << endl;
    cout << "char byte: ";
    char deneme[20];
    cout << sizeof deneme << endl;
    return 0;
}