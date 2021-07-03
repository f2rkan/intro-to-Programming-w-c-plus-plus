#include<iostream>
#include"list.h"

//fonksiyonlarımız icin prototipler
//gecersiz geri donus ve referans alma

inline void doubleValue(double & x) {x = 2 * x;}
inline void square(double & x) {x = x * x;}
inline void halve(double & x) {x = x / 2;}
inline void reciproal(double & x) {x = 1 / x;}

int main(void)
{
    //using direktifleri
    using std::cin;
    using std::cout;
    using std::endl;

    //kullanıcıdan degerler istenir
    cout << "list sınıfını kullanarak\n"
         << "istedigimiz kadar giris alabiliriz\n"
         << "ancak bu ornek icin 10 giris alacagiz." << endl;

    List l;

    cout << "enter a number(q to quit): ";
    double d;
    while(cin >> d && l.isFull() == 0)
    {
        l.add(d);
        if(l.isFull() == 0)
            cout << "enter a number (q to quit): ";
    }
    cin.clear();
    cin.ignore(256, '\n');
    cout << "You have entered " << l.numberOfItems()
         << " items" << endl;
    
    //display items
    cout << "iste liste:\n";
    l.printList();

    cout << "asagidakiler arasindan secim yap, q to quit:\n";

    cout << "1. doubleValue()   2. square()     \n"
         << "3. halve()     4. reciproal()      \n";
    

    int choice;
    while(cin >> choice)
    {
        switch (choice)
        {
            case 1: l.visit(doubleValue);
                break;
            case 2: l.visit(square);
                break;
            case 3: l.visit(halve);
                break;
            case 4: l.visit(reciproal);
                break;
            default: cout << "Not an option" << endl;
                break;
        }

        cout << "iste yeni liste:" << endl;
        l.printList();
        cout << "asagidakilerden birini sec, q to quit:\n";
        cout << "1. doubleValue()   2. square()     \n"
         << "3. halve()     4. reciproal()      \n";
    }
    cout << "Bye!" << endl;

    return 0;
}