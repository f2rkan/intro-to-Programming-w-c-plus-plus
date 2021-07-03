#include<iostream>
#include"stonewt.h"
using std::cout;

void display(const Stonewt & st, int n);

int main(void)
{
    Stonewt incognito = 275; //baslatmak icin yapıcı kullanılır
    Stonewt wolfe(287.7); //same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

    cout << "weight: ";
    incognito.show_stn();

    cout << "weighed2: ";
    wolfe.show_stn();

    cout << "weighed3: ";
    taft.show_lbs();

    incognito = 276.8; //donusum icin yapıcı kullanılır
    taft = 325; //same as taft = Stonewt(325);
    cout << "weighed4: ";
    taft.show_lbs();
    display(taft, 2);
    cout << "ww\n";
    display(422, 2);
    cout << "aa\n";

    return 0;
}
void display(const Stonewt & st, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "wow! ";
        st.show_stn();
    }
}