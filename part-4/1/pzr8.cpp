#include<iostream>
#include<string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);
int main(void)
{
    string list[SIZE];
    cout << "enter your " << SIZE << " favorite twitter char:\n";
    for(int i = 0; i < SIZE; i++)
    {
        cout << i+1 << ": ";
        getline(cin, list[i]);
    }
    cout << "your list:\n";
    display(list, SIZE);
    cout << "Done.\n";
    return 0;
}
void display(const string sa[], int n)
{
    for(int i = 0; i < n; i++)
    cout << i+1 << ": " << sa[i] << endl;
}