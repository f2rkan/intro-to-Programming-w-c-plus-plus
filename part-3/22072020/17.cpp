#include<iostream>

int main(void)
{
    using namespace std;

    int value = 7;
    int *pointer_value;
    pointer_value = &value;

    cout << "degerler:\n\n" << "value: " << value << ", value's address: " << &value << endl;
    cout << *pointer_value << ", address: " << pointer_value << endl;

    cout << "degeri guncelliyoruz:\n";
    *pointer_value = 77;
    cout << "guncellenen deger: " << value << ", address: " << &value << endl;

    return 0;
}