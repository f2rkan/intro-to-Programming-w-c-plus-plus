#include<iostream>
int main(void)
{
    using namespace std;
    
    int chest = 42; //desimal
    int waist = 0x42; //hekzadesimal
    int inseam = 042; //oktav
    
    cout << "chest = " << chest << endl;
    cout << "waist = " << waist << endl;
    cout << "inseam = " << inseam << endl;

    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    
    return 0;
}