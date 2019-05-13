// OOPPracticeInheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Students.h"
#include <iostream>
#include <cstring>
#include <cassert>

using namespace std;

People::People(char* na, char* uc)
{
	name = new char[strlen(na) + 1];
	assert(name != NULL);
	strcpy_s(name, strlen(na) + 1, na);
	ucn = new char[strlen(uc) + 1];
	assert(ucn != NULL);
	strcpy_s(ucn, strlen(uc) + 1, uc);
}

People::~People()
{
	cout << "~People()\n";
	delete[] name;
	delete[] ucn;
}

void People::PrintPeople() const
{
	cout << "Name: " << name << endl;
	cout << "UCN: " << ucn << endl;
}

Student::Student(char* na, char* uc, long fn, double gp) : People(na, uc)
{
	fac_num = fn;
	gpa = gp;
}

void Student::PrintStudent() const
{
	PrintPeople();
	cout << "Faculty number: " << fac_num << endl;
	cout << "Student's GPA: " << gpa << endl;
}

PStudent::PStudent(char* na, char* uc, long fn, double gp, double f) : Student(na, uc, fn, gp)
{
	fee = f;
}

void PStudent::PrintPStudent() const
{
	PrintStudent();
	cout << "Fee: " << fee << endl;
}

int main()
{
	PStudent pst("Alice Oldfield", "9608141111", 71444, 5.5, 400);
	pst.PrintPStudent();
    return 0;
}

