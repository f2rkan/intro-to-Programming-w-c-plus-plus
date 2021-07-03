#include<iostream>
using namespace std;

int main()

{
    typedef double d;
    const d PI = 3.141592;
    d radius, circumference, area;
    cout<<"welcome to the circle creator!"<<endl;
    cout<<"what would you like the radius of the circle to be?"<<endl;
    cin>>radius;

    area = PI*radius*radius;
    circumference=PI*(radius*2);

    cout<<"the area of the circle is: "<<area<<endl;
    cout<<"the circumference of the circle is: "<<circumference<<endl;
    cout<<"thank you for playing the circle creation game!"<<endl;

    return 0;

}
