#include<iostream>
using namespace std;

int main(void)
{
    float arr[5] = {14.5, 20.0, 19.5, 27.5, 0.1};
    float *ptr1 = &arr[1] + 2;
    float * ptr2 = arr+ 2;
    float *ptr3 = ptr1 + 1;

    cout << *ptr1 << "-" << *ptr2 << "-" << *ptr3 <<endl;

    return 0;
}