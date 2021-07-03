#include<iostream>
#include"customerStack.h"

int main(void)
{
    using std::cin;
    using std::endl;
    using std::cout;

    //customers tanımlama
    customer Jimmy = {"Jimmy", 100};
    customer Timmy = {"Timmy", 23};
    customer Minny = {"Minny", 122};
    customer Vinny = {"Vinny", 12.11};

    cout << "we have four customers:\n";
    cout << Jimmy.fullname << ", paid $"
         << Jimmy.payment << endl;
    cout << Timmy.fullname << ", paid $"
         << Timmy.payment << endl;
    cout << Minny.fullname << ", paid $"
         << Minny.payment << endl;
    cout << Vinny.fullname << ", paid $"
         << Vinny.payment << endl;
    
    cout << "let's push Jimmy" << endl;

    //push customers
    CustomerStack s;
    if(s.push(Jimmy))
          cout << Jimmy.fullname << " pushed successfully!"
               << endl;
     else
          cout << Jimmy.fullname << " not pushed successfully!"
               << endl;
     double total = 0.0;
     cout << "iste kosu toplamimiz: $" << total << endl;

     cout << "let's pop Jimmy" << endl;

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

     cout << "let's pop another customer" << endl;

     //let'ws pop one last customer
     if(s.pop(c))
     {
          cout << "customer " << c.fullname << " poped."
               << endl;
          total += c.payment;
     }
     else
          cout << "no customers to pop" << endl;
     
     cout << "iste yeni kosulan tutar: $" << total
          << endl;
     
     return 0;
}