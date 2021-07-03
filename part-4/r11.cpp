#include"r1.h"
#include<iostream>

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    //customerları tanımlama
    customer Jimmy = {"Jimmy", 190};
    customer Kinny = {"Kinny", 12.11};
    customer Qinny = {"Qinny", 133.33};
    customer Yinny = {"Yinny", 233.21};

    cout << "we've four customers:\n";
        cout << Jimmy.fullname << ", paid $"
             << Jimmy.payment << endl;
        cout << Kinny.fullname << ", paid $"
             << Kinny.payment << endl;
        cout << Qinny.fullname << ", paid $"
             << Qinny.payment << endl;
        cout << Yinny.fullname << ", paid $"
             << Yinny.payment << endl;

    cout << "Jimmy'ye push:\n";
    
    //push customers
    CustomerStack s;
    if(s.push(Jimmy))
        cout << Jimmy.fullname << " pushed successfully!"
             << endl;
    else
        cout << Jimmy.fullname << " pushed not successfully~~"
             << endl;
    
    double total = 0.0;
    cout << "iste kosu toplamimiz: $" << total << endl;

    //pop customers
    customer c;
    if(s.pop(c))
    {
        cout << "customer " << c.fullname << " popped."
             << endl;
        total += c.payment;
    }
    else
        cout << "no customers to pop" << endl;
    
    cout << "baska bir customer acalim" << endl;
    
    //son bir customer acıyoruz
    if(s.pop(c))
    {
        cout << "customer " << c.fullname << " popped."
             << endl;
        total += c.payment;
    }
    else
        cout << "no customers to pop" << endl;
    
    cout << "iste yeni kosulan tutar: $" << total
         << endl;
    
    return 0;
}