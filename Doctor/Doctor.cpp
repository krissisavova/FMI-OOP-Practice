// Doctor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

const int MAX_SIZE = 20;

using namespace std;

struct Doctor
{
	char last_name[MAX_SIZE];
	char hospital[MAX_SIZE];
	int years_pr;
	bool sex;

	void input()
	{
		cout << "Last name: ";
		cin.getline(last_name, MAX_SIZE);
		cout << "Name of hospital: ";
		cin.getline(hospital, MAX_SIZE);
		cout << "Years of experience: ";
		cin >> years_pr;
		cout << "Sex (1 - female, 0 - male): ";
		cin >> sex;
	}

	void print()
	{
		cout << "--------------------" << endl;
		cout << "Last Name" << setw(MAX_SIZE) << "Hospital" << setw(MAX_SIZE) << "Experience" << setw(MAX_SIZE) << "Sex" << endl;
		cout << last_name << setw(MAX_SIZE) << hospital << setw(MAX_SIZE) << years_pr 
			 << setw(MAX_SIZE) << (sex == 1 ? "Female" : "Male") << endl;
	}

	//a method for a more detailed way of how to change a certain string (name of hospital ot last name)
	//void copy(char* arr1, char* arr2)
	//{
	//	int i = 0;
	//	do
	//	{
	//		arr1[i] = arr2[i];
	//		++i;
	//	} while(arr2[i]);

	//	arr1[i] = '\0';
	//}

	void setLastName(char newLastName[])
	{
		strcpy_s(last_name, newLastName);
		//copy(last_name, newLastName);
	}

	void setHospitalName(char newHospitalName[])
	{
		strcpy_s(hospital, newHospitalName);
		//copy(hospital, newHospitalName);
	}
};



int main()
{
	char myName[MAX_SIZE];
	cout << "Type your name: ";
	cin.getline(myName, MAX_SIZE);
	cout << "Welcome, " << myName <<"!" << endl;

	Doctor d;

	char x = 'x';

	d.input();
	d.print();
	cout << endl;

	cout << "Would you like to change the last name? (Y for yes and N for no)" << endl;
	cin >> x;
	if (x == 'Y' || x == 'y')
	{
		char newLastName[MAX_SIZE] = "";
		std::cout << "Enter a new last name";
		std::cin.ignore();
		std::cout << ": ";
		std::cin.getline(newLastName, MAX_SIZE);
		d.setLastName(newLastName);
		std::cout << std::endl;
		d.print();
	}
	else
		cout << "Okay, moving on!" << endl;

	cout << "Would you like to change the hospital's name? (Y for yes and N for no)" << endl;
	cin >> x;
	if (x == 'Y' || x == 'y')
	{
		char newHospitalName[MAX_SIZE] = "";
		cout << "Enter a new name of hospital";
		cin.ignore();
		cout << ": ";
		cin.getline(newHospitalName, MAX_SIZE);
		d.setHospitalName(newHospitalName);
		cout << endl;
		d.print();
	}

	cout << endl;
	cout << "Thank you, " << myName << "!" << " Goodbye and have a nice day! :)" << endl;

    return 0;
}

