#include<iostream>

int main(void)
{
    using namespace std;

    cout << "enter the first number: ";
    int first;
    cin >> first;

    cout << "ilk sayidan buyuk bir sayi gir: ";
    int second;
    cin >> second;

    if(first > second)
    {
        cout << "error. program abort.\n";
        return 1;
    }
    int temp = first;
    int sum = 0;

    while(temp <= second)
    {
        sum += temp;
        temp += 1;
    }
    cout << first << " ve " << second << " dahil olmak uzere, bu sayilarla beraber aralarindaki sayilarin toplami: "
         << sum << endl;

    return 0;
}