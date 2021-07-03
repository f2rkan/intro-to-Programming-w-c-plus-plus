#include<iostream>

struct fish
{
    double weight;
    double inch;  
};
int main(void)
{
    using namespace std;
    
    fish x;
    x.weight = 17.45;
    x.inch = 5.7;

    cout << "x:\n";
    cout << x.weight << ", " << x.inch << endl;

    return 0;
}