#include<iostream>

int main(void)
{
    using namespace std;

    int teq[5] {99,2,3,4,9};
    int * p_teq = new int[5];
    p_teq = &teq[0];

    cout << "ilk eleman: " << *(p_teq) << "\nson eleman: " << *(p_teq + 4) << endl;

    return 0;
}