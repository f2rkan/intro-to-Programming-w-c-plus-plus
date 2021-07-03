#include<iostream>
#include<cmath>

using namespace std;
//structure declarations
struct polar
{
    double angle; //direction from origin
    double distance; //distance from origin
};
struct rect
{
    double x; //horizontal distance from origin
    double y; //vertical distance from origin
};
void rect_to_polar(const rect * xypos, polar * pda);
void show_polar(const polar * pda);

int main(void)
{
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "enter the x and y values: ";
    while(cin >> rplace.x >> rplace.y) //slick use of cin
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "enter the new x and y values: ";
    }
    cout << "Done.\n";
    return 0;
}
void rect_to_polar(const rect * xypos, polar * pda)
{
    using namespace std;
    pda -> distance =
    sqrt(xypos -> x * xypos -> x + xypos -> y * xypos -> y);
    pda -> angle = atan2(xypos -> y, xypos -> x);
}
void show_polar(const polar * pda)
{
    using namespace std;
    double Rad_to_deg = 57;
    cout << "distance = " << pda -> distance;
    cout << ", angle = " << pda -> angle * Rad_to_deg;
    cout << " degrees.\n";
}