#include<iostream>

int main(void)
{
    using namespace std;
    int yams[3]; //int tipinde 3 elemanlı dizi
    yams[0] = 7; //dizinin ilk elemanına deger atadık
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; //dizi baslatıldı

    cout << "total yams: ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << yams[1] << " paketinin maaliyeti: " << yamscosts[1] << endl;

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "the total yamexpense is " << total << " cents.\n";

    cout << "\nSize of yams array = " <<sizeof yams;
    cout << " bytes\n";
    cout << "size of one element = " << sizeof yams[0];
    cout << " bytes.\n";

    return 0;
}