#include<iostream>
#include<string>


int main(void)
{
    
    using namespace std;
    struct car
{
    string make;
    int year;
};

    cout << "catalog size: ";
    int cat_size;
    cin >> cat_size;

    cin.get();

    car * collection = new car[cat_size];
    int count = 0;
    while(count < cat_size)
    {
        cout << "car #" << count + 1 << ":\n";
        cout << "enter the make: ";
        getline(cin, collection[count].make);
        cout << "enter the year: ";
        cin >> collection[count].year;
        cin.get();
        count += 1;
    }
    cout << "Your collection:\n";
    for(int i = 0; i < cat_size; i++)
    {
        cout << collection[i].year << " " << collection[i].make << endl;
    }

    return 0;
}