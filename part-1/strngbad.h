#include<iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_

class StringBad
{
    private:
        char * str; //string pointerı
        int len; //string uzunlugu
        static int num_strings; //nesne sayısı
    public:
        StringBad(const char * s); //constructor
        StringBad(); //default constructor
        ~StringBad(); //destructor
        StringBad(const StringBad & st);
    //friend function
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};
#endif