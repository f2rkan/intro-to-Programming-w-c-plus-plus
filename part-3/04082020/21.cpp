#include<iostream>

struct deneme
{
    int year;
};

int main(void)
{
    deneme s01, s02, s03;
    s01.year = 1995;

    deneme * p = &s02;
    p -> year = 1996;

    deneme trio[3];
    trio[0].year = 1997;
    std::cout << trio -> year << std::endl;

    const deneme * arp[3] = {&s01, &s02, &s03};
    std::cout << arp[1] -> year << std::endl;

    const deneme **ppa = arp;
    auto ppb = arp;

    std::cout << (*ppa) -> year << std::endl;
    std::cout << (*(ppb + 1)) -> year << std::endl;

    return 0;
}