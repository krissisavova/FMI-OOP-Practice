#include "Vector.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sum(Vector<int> v) {
	int sum = 0;
	for (size_t i = 0; i < v.length(); ++i) {
		// sum += v.getElement(i);
		sum += v[i];
	}
	return sum;
}

int main() {
	Vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	cout << v << endl;

	Vector<int> v2;
	Vector<int> v3;

	v2.operator=(v);
	cout << v2 << endl;

	for (size_t i = 0; i < v.length(); ++i) {
		// v.setElement(i, v.getElement(i) + 1); --> before defining operator[]
		v[i] = v[i] + 1; // v.operator[](i) = v[i] + 1;
	}

	cout << sum(v) << endl;



	return 0;
}
