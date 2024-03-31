#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include "Array.tpp"

template <typename T>
class Array
{
public:
	Array();
	Array(unsigned int size);
	Array(Array &cpy);
	~Array();
	Array &operator=(Array &rhs);
	T &operator[](unsigned int index);
	const T &operator[](unsigned int index) const;
	unsigned int size(void) const;
private:
	T *arr;
	unsigned int length;
};

#endif


