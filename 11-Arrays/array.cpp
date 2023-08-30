#include <iostream>

int main()
{
	// Without -pedantic-errors flag, we wont get CTE
	// With -pedantic-errors flag, we get CTE
	// i is runtime constant and should not be used to set the array length
	int i = 10;
	int arr[i]{};

	// j is compile time constant. So no error.
	constexpr int j = 19;
	int arr_2[j]{};
}