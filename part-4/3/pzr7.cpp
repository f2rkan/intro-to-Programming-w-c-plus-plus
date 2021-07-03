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
void rect_to_polar(const rect * pos, polar * pda);
void show_polar(const polar * pda);

int main(void)
{
    using namespace std;
    polar pplace;
    rect rplace;
    cout << "enter the x and y values:\n";
    while(cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);

        cout << "enter the new x and y values or press q to quit:\n";
    }
    return 0;
}
//function declarations
void rect_to_polar(const rect * pos, polar * pda)
{
    pda -> distance =
    sqrt(pos -> x * pos->x + pos->y * pos->y);
    pda -> angle = atan2(pos->y, pos->x);
}
void show_polar(const polar * pda)
{
    using namespace std;
    const double Rad_to_deg = 57.5464;

    cout << "distance = " << pda -> distance;
    cout << ", angle = " << pda -> angle * Rad_to_deg;
    cout << " degrees." << endl;
}