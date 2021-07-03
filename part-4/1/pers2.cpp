#include<iostream>

const int Max = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main(void)
{
    using namespace std;
    double deneme[Max];

    int size = fill_array(deneme, Max);
    show_array(deneme, size);
    if(size > 0)
    {
        cout << "enter a revalue factor: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            cout << "duzgun giris yap: ";
            while(cin.get() != '\n') continue;
        }
        revalue(factor, deneme, size);
        show_array(deneme, size);
    }
    cout << "Done.\n";
    return 0;
}
int fill_array(double ar[], int limit)
{
    using namespace std;
    int temp;
    int i;
    for(i = 0; i < limit; i++)
    {
        cout << "deger #" << i+1 << ": ";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
            continue;
            cout << "bad input, input process terminated." << endl;
            break;
            
        }
        else if(temp < 0)
        break;
        ar[i] = temp;
    }
    return i;
}
void show_array(const double ar[], int n)
{
    using namespace std;
    for(int i = 0; i < n; i++)
    {
        cout << "degisen #" << i+1 << ": ";
        cout << ar[i] << endl;
    }
}
void revalue(double r, double ar[], int n)
{
    for(int i = 0; i < n; i++)
        ar[i] *= r;
}