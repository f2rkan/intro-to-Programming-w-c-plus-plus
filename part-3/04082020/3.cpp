#include<iostream>

int main(void)
{
    using namespace std;

    int deneme = 57;
    int * p_deneme = &deneme;

    cout << "values(two ways):\n";
        cout << deneme << endl << *p_deneme << endl;
    cout << "addresses(two ways):\n";
        cout << &deneme << endl << p_deneme << endl;

    
    return 0;
}