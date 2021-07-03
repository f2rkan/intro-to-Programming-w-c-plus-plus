#include<iostream>

int main(void)
{
    using namespace std;

    int n;
    cout << "1-10 arası sayi gir, favorimi bul: ";

    do{
        cin >> n;
    }while(n != 7) 
        ;
    
    cout << "yes, my favorite " << n << endl;

    return 0;
}