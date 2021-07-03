#include<iostream>
int main(void)
{
    using namespace std;
    int line;
    cout << "enter the line number: ";
    cin >> line;

    for(int i = 1; i <= line; i++) //line control
    {
        for(int k = 1; k <= line - i; k++) //nokta control
        {
            cout << ".";
        }
        for(int k = line - i; k < line; k++) //yildiz kontrol
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}