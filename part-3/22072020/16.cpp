#include<iostream>

int main(void)
{
    using namespace std;

    int updates = 6;
    int * p_updates;
    p_updates = &updates;

    //değerleri 2 şekilde ifade edebiliriz
    cout << "values:\nUpdates: " << updates;
    cout << ", *p_updates: " << *p_updates << endl;

    //adresleri de 2 şekilde ifade edebiliriz
    cout << "addresses: " << &updates;
    cout << ", p_updates: " << p_updates << endl;

    //değeri değiştirmek için pointer kullanıyoruz
    *p_updates = 7;
    cout << "guncellenen deger: " << updates << endl;
    
}