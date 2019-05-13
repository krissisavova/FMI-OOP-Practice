#pragma once
#include <iostream>
using namespace std;

class People
{
public:
	People(char* = "", char* = "");
	~People();
	void PrintPeople() const;
private:
	char* name;
	char* ucn;
};

class Student : public People
{
public:
	Student(char* = "", char* = "", long = 0, double = 0);
	~Student()
	{
		cout << "~Student()\n";
	}
	void PrintStudent() const;
private:
	long fac_num;
	double gpa;
};

class PStudent : public Student
{
public:
	PStudent(char* = "", char* = "", long = 0, double = 0, double = 0);
	~PStudent()
	{
		cout << "~PStudent()" << endl;
	}
	void PrintPStudent() const;
private:
	double fee;
};