#include<iostream>
#include"person.h"
#include<cstring>

//Constructor
Person::Person(const string & ln, const char * fn)
{
	using std::strncpy;

	lname = ln;
	strncpy(fname, fn, LIMIT);
	fname[LIMIT-1] = '\0';
}

void Person::Show() const
{
	using std::cout;
	using std::endl;

	cout << fname << ", " << lname << endl;
}
void Person::FormalShow() const
{
	using std::cout;
	using std::endl;

	cout << lname << ", " << fname << endl;
}