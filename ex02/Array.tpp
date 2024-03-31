#include "Array.hpp"

template <typename T>

Array<T>::Array()
{
  length = 0;
  arr = new T[0]; 
}

template <typename T>

Array<T>::Array(unsigned int size)
{
  length = size;
  arr = new T[size];
  for (unsigned int i = 0; i < size ; i++)
    arr[i] = 0;
}

template <typename T>

Array<T>::Array(const Array & other)
{
  arr = new T[other.size()];
  length = other.size();
  for (unsigned int i = 0 ; i < other.size())
  {
    arr[i] = other[i];
  }
}

template <typename T>
Array<T>::~Array()
{
    delete[] arr; 
}

template <typename T>

Array<T> Array<T>::operator=(const Array & rhs)
{
	delete []arr;
	arr = new T[other.size()];
	length = other.size();
	for (unsigned int i = 0; i < other.size(); i++)
	{
		arr[i] = other[i];
	}
	return (*this);
}

template <typename T>

const T &Array<T>::opertor[](unsigned int index) const
{
	if (index > length)
		throw std::out_of_range("index out of bounds");
	return(arr[index]);
}

template <typename T>

T &Array<T>::operator[](unsigned int index)
{
	if (index > length)
		throw std::out_of_range("index out of bounds");
	return (arr[index]);
}

template <typename T>

unsigned int Array<T>::size() const
{
	return (length);
}