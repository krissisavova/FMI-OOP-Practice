// Task1Advanced.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Students.h"
#include <iostream>
#include <string>

int main()
{
	Students chris("Chris", 5, 5, 5, 5);
	Students mark("Mark", 4, 5, 3, 5);
	Students lu("Lu", 5, 5, 4, 4);
	Students charles("Charles", 3, 5, 3, 3);
	Students david("David", 2, 6, 6, 6);

	string namename = "";
	cout << "Type student name: ";
	getline(cin, namename);

	if (namename == "Chris")
	{
		chris.getName();
		chris.printInfo();
	}
	else if (namename == "Mark")
	{
		mark.getName();
		mark.printInfo();
	}
	else if (namename == "Lu")
	{
		lu.getName();
		lu.printInfo();
	}
	else if (namename == "Charles")
	{
		charles.getName();
		charles.printInfo();
	}
	else if (namename == "David")
	{
		david.getName();
		david.printInfo();
	}
	else
		cout << " -- UNENROLLED STUDENT -- " << endl;

    return 0;
}

