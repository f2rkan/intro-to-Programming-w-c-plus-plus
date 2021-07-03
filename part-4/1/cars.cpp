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
    double y; //vertica distance from origin
};
polar rect_to_polar(rect pos);
void show_polar(polar dap);
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
        cout << "next two values or press q to quit: ";
    }
    cout << "Done.\n";
    return 0;
}
polar rect_to_polar(rect pos)
{
    polar answer;
    answer.distance =
    sqrt(pos.x * pos.x + pos.y * pos.y);
    answer.angle = atan2(pos.y, pos.x);

    return answer;
}
void show_polar(polar dap)
{
    using namespace std;
    const double Rad_to_deg = 57.3135;
    cout << "distance = " << dap.distance;
    cout << ", angle = " << dap.angle * Rad_to_deg;
    cout << " degrees." << endl;
}