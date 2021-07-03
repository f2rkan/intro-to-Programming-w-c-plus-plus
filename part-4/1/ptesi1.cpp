#include<iostream>
#include<cmath>
//structure declarations
struct polar
{
    double distance; //distance from origin
    double angle; //direction from origin
};
struct rect
{
    double x; //horizontal distance from origin
    double y; //vertical distance from origin
};
//function prototypes
void rect_to_polar(const rect * pos, polar * pda);
void show_polar(polar* pda);

//l3ts g0
int main(void)
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "enter the x and y values: ";
    while(cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "next two values or press q to quit: ";
    }
    cout << "Done.\n";

    return 0;
}
void rect_to_polar(const rect * pos, polar * pda)
{
    pda -> distance =
    sqrt(pos -> y * pos -> y + pos -> x * pos -> x);
    pda -> angle = atan2(pos -> y, pos-> x);
}
void show_polar(polar * pda)
{
    using namespace std;
    const double Rad_to_deg = 57.65464;
    cout << "distance = " << pda -> distance;
    cout << ", angle = " << pda -> angle * Rad_to_deg;
    cout << " degrees.\n";
}
