#ifndef DENEME_H_
#define DENEME_H_
#include<iostream>

class stri
{
    private:
        static int num_strings;
        int len;
        char * str;
    public:
        stri();
        ~stri();
        stri(const char * s);
    
    //friend
    friend std::ostream & operator<<(std::ostream & os, const stri & st);
};
#endif