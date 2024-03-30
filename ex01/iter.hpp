#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, int size, void(*f)(T& element))\
{
    for (int i = 0; i < size; i++)
        f(arr[i]);

}

template <typename T>
void print(T &element)
{
    std::cout << element << std::endl;
}

#endif
