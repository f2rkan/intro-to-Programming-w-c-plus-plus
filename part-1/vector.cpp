#include"vector.h"
#include<cmath>

using std::sqrt;
using std::atan;
using std::atan2;
using std::cout;
using std::sin;
using std::cos;

namespace VECTOR
{
    const double Rad_to_deg = 45.0 / atan(1.0);

    //private methods
    //x ve y arasındaki büyüklük hesaplanır
    void Vector::set_mag() {mag = sqrt(x * x + y * y); }
    void Vector::set_ang()
    {
        if(x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }

    //x'i kutupsal koordinattan ayarla
    void Vector::set_x() {x = mag * cos(ang); }
    void Vector::set_y() {y = ang * sin(ang); }

    //public methods
    Vector::Vector() //default constructor
    {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode == form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_();
            set_y();
        }
        else
        {
            cout << "Vector()-- icin hatali 3. arguman ";
            cout << "vector 0'a ayarlandi\n";
            x = y = ang = mag = 0.0;
            mode = RECT;
        }
    }
    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        }
        else
        {
            cout << "Vector() -- icin hatali 3. arguman ";
            cout << "vector 0'a ayarlandi\n";
            x = y = ang = mag = 0.0;
            mode = RECT;
        }
    }
    Vector::~Vector() {} //destructor
    void Vector::polar_mode() {mode = POL; } //reset to polar mode
    void Vector::rect_mode() {mode = RECT; }

    //operator overloading
    Vector Vector::operator+(const Vector & b) const { return Vector(x + b.x, y + b.y); }
    Vector Vector::operator-(const Vector & b) const { return Vector(x - b.x, y - b.y); }
    
    //vector'un ters isaretli olması:
    Vector Vector::operator-() const { return Vector(-x, -y); }

    //vektör'ü n ile çarp
    Vector Vector::operator*(double n) const {return Vector(n * x, n * y); }

    //friend methods

    Vector operator*(double n, const Vector & a) const { return a * n; }

    //mode rect ise dikdortgen koordinatları goster
    //mode pol ise kutupsal koordinatları goster
    std::ostream & operator<<(std::ostream & os, const Vector & v)
    {
        if(v.mode == Vector::RECT)
            os << "(x, y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Vector::POL)
            os << "(x, y) = (" << v.mag << ", " << v.ang << ")";
        else
            os << "vector nesnesi modu gecersiz";

        return os;
    }
}