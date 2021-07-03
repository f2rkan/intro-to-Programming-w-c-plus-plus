#include<iostream>

int main(void)
{
    using namespace std;

    char ch = 'M';
    int i = ch;
    cout << ch << " karakterinin ascii degeri: ";
    cout << i << endl;

    cout << "karakterin sayisal degerini 1 artiriyoruz: ";
    ch += 1;
    cout << "guncellenen karakter: " << ch << "ve i = " << i << endl;

    cout << "cout.put(ch) = ";
    cout.put(ch);

    cout.put('!');

    cout << endl << "Done" << endl;

    return 0;
}