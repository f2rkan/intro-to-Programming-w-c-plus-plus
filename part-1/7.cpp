#include<iostream>

using namespace std;

int kareal(int a)
{
   return a * a;
}
int kareal(int * a)
{
    (*a) = (*a) * (*a);
   return *a;
}
int kareal(double &a)
{
    a = a * a;
    return a + 1;
}
int main(void)
{
    
    cout << kareal(5) << endl;
    int q = 9;
    cout << kareal(&q) << endl;
    double b = 4;
    cout << kareal(b) << endl;

    return 0;
}