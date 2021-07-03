#ifndef PERSON_H_
#define PERSON_H_
#include<iostream>
using std::string;

class Person
{
	private:
		static const int LIMIT = 25;
		string lname; //last name
		char fname[LIMIT]; //first name
	public:
		Person() {lname = "", fname[0] = '\0';}  //#1
		Person(const string & ln, const char * fn = "Heyyou"); //#2

	//display
	void Show() const; //firstname, lastname format
	void FormalShow() const; //lastname, firstname format
};

#endif