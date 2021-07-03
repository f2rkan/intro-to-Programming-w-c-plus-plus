#include<iostream>

unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);

int main()
{
    using namespace std;
    
    char * trip = "Hawaii!!";
    unsigned long n = 12345678;
    int i;
    char * temp;

    for(i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        
        delete[] temp; //gecici depolamayı goster.
    }

    return 0;
}

//bu fonksiyon, sayı numarasının ilk ct basamaklarını dondurur.
unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;

    if(ct == 0 || num == 0)
        return 0; //hane yoksa sıfır döndür
    while(n /= 10)
        digits++;
    if(digits > ct)
    {
        ct = digits - ct;
        while(ct--)
            num /= 10;
        
        return num;
    }
    else 
        return num; 
}

//bu fonksiyon, str stringindeki ilk n karakterden olusan
//yeni bir stringe bir isaretci dondurur
char * left(const char * str, int n)
{
    if(n < 0)
        n = 0;
    char * p = new char[n + 1];
    int i;
    for(i = 0; i < n && str[i]; i++)
        p[i] = str[i];
    while(i <= n)
        p[i++] = '\0';
    
    return p;
}