#include<iostream>

int main(void)
{
    char ch;

    std::cout << "yazin, tekrar edecegim\n";
    std::cin.get(ch);
    while(ch != '.')
    {
        if(ch == ' ') std::cout << ch;
        else std::cout << ++ch;

        std::cin.get(ch);
    }
    
    std::cout << "biraz aksilik cikmis olabilir\n";
    std::cout << "\n";

    return 0;
}