#include<iostream>

int main(void)
{
    using namespace std;
    int rats = 101;
    int &rodents = rats; //rodents is a reference

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rats++;

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    //bazı uygulamalar asagıdakilerin dokumunu gerektirir:

    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    
    return 0;
}