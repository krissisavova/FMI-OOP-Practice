#pragma once

template <typename T>
class Vector
{
public:
	Vector();
	Vector(const Vector<T>& other);

	void push_back(const T& data);

	T getElement(size_t i) const;
	void setElement(size_t i, const T& x);

	size_t length() const;

	T& operator[](size_t i);
	T operator[](size_t i) const;

	Vector<T>& operator+(T x);
	Vector<T> operator+(const Vector<T>& other) const;

	Vector<T>& operator+= (T x);
	Vector<T> operator+= (const Vector<T>& other);

	Vector<T>& operator=(const Vector<T>& other);
	~Vector();

	friend std::ostream& operator<<(std::ostream&, Vector<T>);

private:
	T *contents;
	size_t size;
};

//template <typename T>
//std::ostream& operator<<(std::ostream&, Vector<T>);

