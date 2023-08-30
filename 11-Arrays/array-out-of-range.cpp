#include <iostream>

int main()
{
	int arr[5]{ 1, 2, 3, 4, 5 };
	int var = 23;

	arr[6] = 13;		// No compile time error
	std::cout << var;
}

// Causes program to crash