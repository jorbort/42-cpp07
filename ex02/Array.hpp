#pragma once
#include <stdexcept>
template <typename T>
class Array
{
public:
	Array();
	Array(unsigned int size);
	Array(const Array &other);
	~Array();

	Array<T> &operator=(const Array &rhs);
	T &operator[](unsigned int index);
	const T &operator[](unsigned int index) const;
	
	unsigned int size(void) const;
private:
	T *arr;
	unsigned int length;
};

#include "Array.tpp"