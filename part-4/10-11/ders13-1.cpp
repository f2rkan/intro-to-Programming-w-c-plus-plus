#include<iostream>
using namespace std;

int main(void)
{
    int len, sum = 0;

    cout << "enter the no. of students in the class" << endl;

    cin >> len;

    int * marks = new int[len]; //dinamik bellek ayrıldı
    cout << "enter the marks of each student" << endl;

    int i = 0;

    while(i < len)
    {
        cin >> *(marks+i);
        i++;
    }
    i = 0;
    while(i < len)
    {
        sum += *(marks + i);
        i++;
    }

    cout << "ortalama: " << sum / len << endl;

    delete [] marks;

    return 0;
}