#pragma once
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Students
{
public:
	Students(string, double, double, double, double);
	void setName(string);
	string getName() const;
	void printInfo() const;

private:
	string name;
	double math;
	double sports;
	double physics;
	double psychology;
};

