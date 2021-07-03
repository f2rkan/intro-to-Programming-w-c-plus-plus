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
//l3t5_g0
int main(void)
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "enter the x and y values: ";
    while(cin >> rplace.x >> rplace.y)//slick use of cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "enter two values or press q to quit" << endl;
    }
    cout << "Done.\n";
    return 0;
}
//convert rectangular
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}
//converting angle to deg
void show_polar(polar dapos)
{
    using namespace std;
    const int Rad_to_deg = 57.355565;
    cout << "Distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees." << endl;
}