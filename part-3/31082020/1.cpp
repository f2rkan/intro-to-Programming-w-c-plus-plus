#include<iostream>

int main(void)
{
    using namespace std;
    
    int x, y;
    cout << "sayilari gir: ";
        cin >> x >> y;
    int sum = 0;
    for(int i = x + 1; i < y; i++)
    {
        sum += i; 
    }
    cout << "toplam: " << sum;

    return 0;
}