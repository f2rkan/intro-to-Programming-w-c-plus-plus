#include<iostream>
#include<cmath>

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
//function headers
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
//go
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
        cout << "enter new x and y values or press q to quit: ";
    }
    cout << "Done.\n";
    return 0;
}
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;
    answer.distance =
    sqrt(xypos.x* xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);

    return answer;
}
void show_polar(polar dapos)
{
    using namespace std;
    double Rad_to_deg = 57.215554;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees.\n";
}