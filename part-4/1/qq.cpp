#include<iostream>
#include<cmath>

//structure declarations
struct polar
{
    double distance; //distance from origin
    double angle; //directions from origin
};
struct rect
{
    double x; //horizontal distance from origin
    double y; //vertical distance from origin
};
//function prototypes
polar rect_to_polar(rect pp);
void show_polar(polar dapos);

int main(void)
{
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "enter the x and y values: ";
    while(cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "next new two values or press q to quit";
    }
    cout << "Done.\n";

    return 0;
}
polar rect_to_polar(rect pp)
{
    using namespace std;
    polar answer;
    answer.distance = sqrt(pp.x * pp.x + pp.y * pp.y);
    answer.angle = atan2(pp.y, pp.x);

    return answer;
}
void show_polar(polar dapos)
{
    using namespace std;
    const int Rad_to_deg = 57;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees" << endl;
}