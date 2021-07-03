#include<iostream>
class poin
{
    public:
        int x, y;
        poin() {x = 0; y = 0; }
        poin(int, int);
        poin operator+(poin);
        poin & operator++(); //++c icin
        poin & operator++(int); //c++ icin
        poin operator+=(poin);
        poin operator+=(int);
};
poin::poin(int a, int b)
{
    x = a;
    y = b;
}
poin poin::operator+=(poin p)
{
    x += p.x;
    y += p.y;

    return *this;
}
poin & poin::operator++(int)
{
    ++x;
    return *this;
}

poin poin::operator+(poin param)
{
    poin temp;
    temp.x = x + param.x;
    temp.y = y + param.y;

    return (temp);
}

poin & poin::operator++()
{
    ++x;
    return *this;
}
poin poin::operator+=(int a)
{
    x += a;
    y += a;

    return *this;
}