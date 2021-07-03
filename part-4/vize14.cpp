#ifndef VIZE14_H_
#define VIZE14_H_
#include<iostream>

using std::string;

class Person
{
    private:
        static const int LIMIT = 25;
        string lname;
        char fname[LIMIT];
    public:
        Person() {lname = ""; fname[0] = '\0';} //1
        Person(const string & ln, const char * fn = "Heyyou";) //2
        void Show() const; //fname, lname
        void FormalShow() const; //lname, fname
};

#endif