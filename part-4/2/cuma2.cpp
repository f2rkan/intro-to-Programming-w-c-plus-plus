#include<iostream>
//recur.cpp --using recursion

void countdown(int n);
int main(void)
{
    countdown(4); //call the recursive function
    return 0;
}
void countdown(int n)
{
    using namespace std;
    cout << "Counting down . . . " << n << endl;
    if(n > 0)
    countdown(n-1); //function calls itself
    cout << n << " Kabuum!\n";
}