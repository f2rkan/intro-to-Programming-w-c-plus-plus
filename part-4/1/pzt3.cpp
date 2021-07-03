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
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main(void)
{
    using namespace std;
    cout << "enter the x and y values: ";
    rect rplace;
    polar pplace;
    while(cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "next two values or press q to quit: ";
    }
    cout << "Done.\n";
    return 0;
}
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
    const int Rad_to_deg = 57.65464;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees.\n";
}