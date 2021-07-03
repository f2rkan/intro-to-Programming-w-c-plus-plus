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
    double y; //direction distance from origin
};
//function prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main(void)
{
    using namespace std;
    polar pplace;
    rect rplace;

    cout << "enter the x and y values: ";
    while(cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "enter the new x and y values or press q to quit:\n";
    }
    return 0;
}
//function declarations
polar rect_to_polar(rect xypos)
{
    polar answer;
    answer.distance =
    sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);

    return answer;
}
void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.5646;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees.\n";

    return;
}