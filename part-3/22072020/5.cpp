#include<iostream>

int main(void)
{
    using namespace std;

    cout << "eviniz hangi yilda insa edildi: ";
    int built;
        cin >> built;
        cin.get();
    cout << "evinin adresi ne: ";
        char address[80];
    cin.getline(address, 80);

    cout << "OK." << endl;
    cout << "evin, " << built << " yilinda insa edildi ve adresi: ";
    cout << address << endl;


    return 0;
}