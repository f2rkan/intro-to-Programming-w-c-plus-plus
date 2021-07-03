#include<iostream>
const int Max = 5;

double * fill_array(double * ar, int limit);
void show_array(const double * ar, double * end);
void revalue(double r, double * ar, double * end);

int main(void)
{
    using namespace std;
    double d[Max];
    double * end = fill_array(d, Max);
    show_array(d, end);

    if(end > 0)
    {
        cout << "enter revaluation factor: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n') 
            continue;
        
            cout << "duzgun bir sayi gir: ";
        }
        revalue(factor, d, end);
        show_array(d, end);
    }
    cout << "Done\n";

    return 0;
}
double * fill_array(double * ar, int limit)
{
    using namespace std;
    double temp;
    int i;
    for(i = 0; i < limit; i++)
    {
        cout << "enter #" << i + 1 << ": ";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
            continue;

            cout << "kotu giris yaptigin icin program sonlandi.\n";
            cout << "bye!\n";
            break;
        }
        else if (temp < 0)
        {
            break;
        }
        *(ar + i) = temp;
    }
    return (ar + i);
}
void show_array(const double * ar, double * end)
{
    using namespace std;
    const double * temp = ar;
    for(int i = 0; temp < end; i++, temp++)
    { 
        cout << "degisen #" << i + 1 << ": $";
        cout << *temp << endl;
    }
}
void revalue(double r, double * ar, double * end)
{
    double * temp = ar;
    for(int i = 0; temp < end; i++, temp++)
    *temp *= r;
}