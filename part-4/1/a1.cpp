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
//prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
int main(void)
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "enter the x and y values: ";
    while(cin >> rplace.x >> rplace.y) //slick use of cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "next two numbers or press quit for exit: ";
    }
    cout << "Done.\n";
    return 0;
}
//convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}
//show polar coordinates, converting angle to degrees
void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.2268898;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees." << endl;
}