#include<iostream>

int main(void)
{
    using namespace std;

    int tacos[10] = {1, 2, 3, 4, 5, 6, 7};
    int * pt = tacos;
    pt = pt + 1;
    int * pe = &tacos[6];
    pe = pe - 1;
    int diff = pe - pt;

    cout << "diff: " << diff << endl;
    cout << "pe = " << pe << ", *pe = " << *pe << endl;
    cout << "pt = " << pt << ", *pt = " << *pt << endl;

    return 0;
}