#include<iostream>


int main(void)
{
    using namespace std;
    double d[5] = {1, 2, 3, 4, 5};
    //pointer 1:
    double *(*p1) = *d;
    cout << "pointer 1:\n";
    cout << (*p1) << ": " << *(*p1) << endl;
    
    
}
