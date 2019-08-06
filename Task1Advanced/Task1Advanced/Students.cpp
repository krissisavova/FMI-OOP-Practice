#include "stdafx.h"
#include "Students.h"


Students::Students(string _name = "", double _math = 0, double _sports = 0, double _physics = 0, double _psychology = 0)
{
	this->name = _name;
	this->math = _math;
	this->sports = _sports;
	this->physics = _physics;
	this->psychology = _psychology;
}

void Students::setName(string _name)
{
	name = _name;
}

string Students::getName() const
{
	return name;
}

void Students::printInfo() const
{
	cout << "Results(Math/Sports/Physics/Psychology): \n";
	double gpa = (math + sports + physics + psychology) / 4;
	bool isItATwo = false;
	cout << name << "\t" << math << "\t" << sports << "\t" << physics << "\t" << psychology << "\n" << endl;
	if (math == 2 || sports == 2 || physics == 2 || psychology == 2)
	{
		isItATwo = true;
	}
	cout << name << "'s GPA is " << gpa << " and the student " << ((gpa < 4.5 || isItATwo == true) ? "FAILS " : "PASSES ") << "the year.\n" << endl;
}
