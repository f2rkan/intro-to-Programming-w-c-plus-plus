#include<iostream>

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    int carrots;
    cout << "kac havucun var: ";
    cin >> carrots;

    cout << "senin ";
    cout << carrots;
    cout << " havucun varmis.";
    cout << endl;
    
    cout << "2 tanesini yersek ";
    carrots -= 2;
    cout << carrots << " havucun kalior.";
    cout << endl;

    return 0;
}