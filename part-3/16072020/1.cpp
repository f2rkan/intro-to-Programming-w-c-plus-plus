#include<iostream>

int main(void)
{
    using std::cout;
    using std::endl;

    int carrots;

    carrots = 12;
    cout << "benim ";
    cout << carrots;
    cout << " havucum var.";
    cout << endl;

    carrots -= 1;
    cout << "bir tane yedigim icin " << carrots;
    cout << " havucum kaldi.";
    cout << endl;

    return 0;
}