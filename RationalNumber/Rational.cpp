#include "stdafx.h"
#include <iostream>
using namespace std;

struct rat
{
	int num;
	int den;
	void makerat(int a, int b);
	int numer() const;
	int denom() const;
	void sumrat(const rat& r1, const rat& r2);
	void subrat(const rat& r1, const rat& r2);
	void multirat(const rat& r1, const rat& r2);
	bool isZero() const;
	void quotrat(const rat& r1, const rat& r2);
	void printrat() const;
};

int gcd(int a, int b)
{
	while (a != b)
	{
		if (a > b) a = a - b;
		else b = b - a;
	}
	return a;
}

void rat::makerat(int a, int b)
{
	if (b == 0) cout << "INVALID" << endl;
	else
	{
		if (a == 0)
		{
			num = 0;
			den = 1;
		}
		else
		{
			int g = gcd(abs(a), abs(b));
			if (a > 0 && b > 0 || a < 0 && b < 0)
			{
				num = (abs(a) / g);
				den = (abs(b) / g);
			}
			else
			{
				num = - (abs(a) / g);
				den = (abs(b) / g);
			}
		}
	}
}

int rat::numer() const
{
	return num;
}
int rat::denom() const
{
	return den;
}

void rat::sumrat(const rat& r1, const rat& r2) //finding r1 + r2
{
	makerat(r1.numer()*r2.denom() + r1.denom()*r2.numer(), r1.denom()*r2.denom());
}

void rat::subrat(const rat& r1, const rat& r2) //finding r1 - r2
{
	makerat(r1.numer()*r2.denom() - r1.denom()*r2.numer(), r1.denom()*r2.denom());
}

void rat::multirat(const rat& r1, const rat& r2) //finding r1 * r2
{
	makerat(r1.numer()*r2.numer(), r1.denom()*r2.denom());
}

bool rat::isZero() const
{
	return num == 0;
}

void rat::quotrat(const rat& r1, const rat& r2) //finding r1 / r2
{
	makerat(r1.numer()*r2.denom(), r1.denom()*r2.numer());
}

void rat::printrat() const
{
	cout << num << "/" << den << endl;
}


int main()
{
	rat r1; r1.makerat(1, 2);
	rat r2; r2.makerat(3, 4);
	rat r;
	//r1.numer(); // finds the numerator of r1, in other words, 1
	//r1.denom(); // finds the numerator of r1, in other words, 2
	r1.printrat(); //outputs r1

	r.sumrat(r1, r2); r.printrat();
	r.subrat(r1, r2); r.printrat();
	r.multirat(r1, r2); r.printrat();
	r.quotrat(r1, r2); r.printrat();

    return 0;
}
