#include<iostream>
unsigned const int Max = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main(void)
{
    using namespace std;
    double properties[Max];
    int size = fill_array(properties, Max);
    show_array(properties, size);
    if(size > 0)
    {
        cout << "enter a revalue factor: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
            continue;
            cout << "kotu giris, lutfen numara gir: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done!\n";
    cin.get();
    return 0;
}
//function definitions
int fill_array(double ar[], int limit)
{
    using namespace std;
    int temp;
    int i;
    for(i = 0; i < limit; i++)
    {
        cout << "Value #" << i+1 << ": ";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
            continue;
            cout << "kotu giris; program sonlandi.\n";
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
        cout << "degisen #" << i+1 << ": $";
        cout << ar[i] << endl;
    }
}
void revalue(double r, double ar[], int n)
{
    for(int i = 0; i < n; i++)
    ar[i] *= r;
}