#include "iter.hpp"

int main(void)
{
    std::cout << "Testing  with ints:" << std::endl;
	int iArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	iter<int>(iArr,10, &print);

	std::cout<< std::endl;
	std::cout << "---------------" << std::endl;

	std::cout << "Testing with floats" << std::endl;
	float fArr[10] = {0.0f, 1.0f, 2.5f, 3.0f, 4.4f, 5.6f, 6.9f,7.8f,8.0f, 9.3f };
	iter<float>(fArr,10, &print);
}
