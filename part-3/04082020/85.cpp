#include<iostream>

int main(void)
{
    using namespace std;

    int count = 0;
    char deneme;

    cout << "metin gir, sayicam; # girersen program sonlanir.\n";
    
    while(cin.get(deneme) && deneme != '#')
    {
        ++count;
    }
   
    cout << endl << count << " karakter girisi yapmissin.\n";

    return 0;

}