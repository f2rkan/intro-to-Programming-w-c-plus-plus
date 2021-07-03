#include<iostream>

struct yas
{
  int year;  
};

int main(void)
{
    yas ali, veli, deli;

    ali.year = 21;

    yas * p = &veli;
    p -> year = 22;

    yas uclu[3];
    uclu[0].year = 23;
    std::cout << uclu -> year << std::endl;

    const yas * arp[3] = {&ali, &veli, &deli};
    std::cout << arp[1] -> year << std::endl;

    const yas **ppa = arp;
    auto ppb = arp;

    std::cout << (*ppa) -> year << std::endl;
    std::cout << (*(ppb + 1)) -> year << std::endl;


    return 0;    
}