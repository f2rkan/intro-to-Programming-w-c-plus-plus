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
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

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
        cout << "enter new values or press q to quit: ";
    }
    cout << "Done.\n";
    return 0;
}
void rect_to_polar(const rect * pxy, polar * pda)
{
    using namespace std;
    pda -> distance = sqrt(pxy -> x * pyx -> x + pxy -> y * pxy -> y);
    pda -> angle = atan2(pxy -> y, pxy -> x);
} 
void show_polar(const polar * pda)
{
    using namespace std;
    const double Rad_to_deg = 57.55646
    cout << "distance = " << pda -> distance;
    cout << ", angle = " << pda -> angle * Rad_to_deg;
    cout << " degrees.\n";
}