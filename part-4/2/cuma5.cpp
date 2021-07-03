#include<iostream>
void countdown(int n);
int main(void)
{
    countdown(4);
    return 0;
}
void countdown(int n)
{
    using namespace std;
    cout << "countdown . . . " << n << " n at " << &n << ")" << endl;
    if(n > 0)
    countdown(n - 1);
    cout << n << ": Kaboom!" << " (n at " << &n << ")" << endl;
}