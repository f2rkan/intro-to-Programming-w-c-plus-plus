#include<iostream>
const int ArSize = 80;
char * left(const char * str, int n = 1);

int main(void)
{
    using namespace std;
    char sample[ArSize];

    cout << "enter a string:\n";
    cin.get(sample, ArSize);
    char * ps = left(sample, 4);
    cout << ps << endl;
    delete [] ps;
    ps = left(sample);
    cout << ps << endl;
    delete [] ps;

    return 0;
}
//bu fonksiyon, str stringindeki ilk n karakterden olusan
//yeni bir stringe bir pointer döndürür:
char * left(const char * str, int n)
{
    if(n < 0)
        n = 0;
    char * p = new char[n + 1];
    int i;
    for(i = 0; i < n && str[i]; i++)
        p[i] = str[i]; //kopya karakterler
    while(i <= n)
        p[i++] = '\0'; //stringin geri kalanını 0 olarak ayarla
    
    return p;
}