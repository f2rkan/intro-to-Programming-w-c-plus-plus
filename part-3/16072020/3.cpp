#include<iostream>
#include<cmath>

int main(void)
{
    using namespace std;

    double area;
    cout << "evinin taban alanini metrekare "
    << "cinsinden gir: ";
    cin >> area;

    double side;
    side = sqrt(area);
    cout << "bu, " << side << "'lik/luk bir karenin kenarina esdegerdir.\n";

    return 0;
}