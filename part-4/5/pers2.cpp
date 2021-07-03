#include<iostream>
const int MAX = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main(void)
{
    using namespace std;
    double d[MAX];
    int size = fill_array(d, MAX);
    show_array(d, size);
    if(size > 0)
    {
        cout << "enter the revalue factor: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
            continue;

            cout << "duzgun giris yap.\n";
        }
        revalue(factor, d, size);
        show_array(d, size);
    }
    cout << "Done.\n";
    return 0;
}
int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for(i = 0; i < limit; i++)
    {
        cout << "enter #" << i+1 << ": ";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
            continue;

            cout << "kotu giris yaptigin icin program sonlandi.\n";
            break;
        }
        else if (temp < 0)
        
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
        cout << "degisen #" << i + 1 << ": $";
        cout << ar[i] << endl;
    }

    return;
}
void revalue(double r, double ar[], int n)
{
    for(int i = 0; i < n; i++)
    ar[i] *= r; 
}