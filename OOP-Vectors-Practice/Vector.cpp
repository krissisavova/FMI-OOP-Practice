#include "Vector.h"
#include <iostream>
#include <cassert>
using std::cin;
using std::cout;
using std::endl;

template <typename T>
Vector<T>::Vector() {
	contents = nullptr;
	size = 0;
}

template <typename T>
void Vector<T>::push_back(const T& data) {
	// contents -> buffer in the memory, it contains size
	// included through add() until now
	// size: the amount of numbers in the buffer

	T* newContents = new T[size + 1];
	for (int i = 0; i < size; ++i) {
		newContents[i] = contents[i];
	}

	newContents[size] = data;
	++size;

	// not needed
	if (contents != nullptr) {
		delete[] contents;
	}

	contents = newContents;
}

template <typename T>
Vector<T>::Vector(const Vector<T>& other) {
	cout << "&";
	contents = new T[other.size];
	size = other.size;

	for (size_t i = 0; i < size; i++) {
		contents[i] = other.contents[i];
	}
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& other) {

	if (this != &other) {
		delete[] contents;
		contents = new T[other.size];
		size = other.size;

		for (size_t i = 0; i < size; i++) {
			contents[i] = other.contents[i];
		}
	}

	return *this;
}

template <typename T>
size_t Vector<T>::length() const {
	return size;
}

template <typename T>
T Vector<T>::getElement(size_t i) const {
	assert(i >= 0 && i < size);
	return contents[i];
}

template <typename T>
void Vector<T>::setElement(size_t i, const T& x) {
	assert(i >= 0 && i < size);
	contents[i] = x;
}

template <typename T>
Vector<T>::~Vector() {
	delete[] contents;
}

template <typename T>
T& Vector<T>::operator[](size_t i) {
	assert(i >= 0 && i < size);
	return contents[i];
}

template <typename T>
T Vector<T>::operator[](size_t i) const {
	assert(i >= 0 && i < size);
	return contents[i];
}

template <typename T>
std::ostream& operator<<(std::ostream& out, Vector<T> v) {
	out << "{";
	for (int i = 0; i < size; ++i) {
		out << v.contents[i] << " ";
	}
	out << "}";
	return out;
}

template <typename T>
Vector<T>& Vector<T>::operator+= (T& x) {
	this->push_back(x);
	return *this;
}

template <typename T>
Vector<T>& Vector<T>::operator+= (const Vector<T>& other) {
	T* newBuffer = new T[size + other.size];
	for (size_t i = 0; i < size; ++i) {
		newBuffer[i] = contents[i];
	}
	for (size_t i = 0; i < size; ++i) {
		newBuffer[size + i] = other.contents[i];
	}
	delete[] contents;
	data = newBuffer;
	size += other.size;

	return *this;
}

template <typename T>
Vector<T>& Vector<T>::operator+(Vector<T>& v1, Vector<T>& v2) {
	Vector result(*this);
	result += x;
	return result;
}

template <typename T>
Vector<T>& Vector<T>::operator+(const Vector<T>& other) const {
	Vector result;

	result.contents = new T[size + other.size];
	for (size_t i = 0; i < size; ++i) {
		result.contents[i] = contents[i];
	}
	for (size_t i = 0; i < size; ++i) {
		result.contents[size + i] = other.contents[i];
	}
	delete[] contents;
	data = newBuffer;
	size += other.size;
}