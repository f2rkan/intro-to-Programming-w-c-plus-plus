#include<iostream>

void simon(int);

int main(void)
{
    using namespace std;
    
    cout << "simon(3) = ";
    simon(3);
    cout << "bir integer degeri sec: ";
    int count;
    cin >> count;
    simon(count);
    cout << "done!" << endl;

    return 0;
}
void simon(int a)
{
    using std::cout;
    cout << "simon der ki: " << a << "\n";
}