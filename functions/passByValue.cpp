// Pass by value

#include <iostream>

void foo( int arg )
{
	std::cout << "arg = " << arg << std::endl;
	arg = 100;
	std::cout << "arg = " << arg << std::endl;
}

int main()
{
	int num = 90;
	std::cout << "num = " << num << std::endl;
	foo( num );
	std::cout << "num = " << num << std::endl;
}

// Output

// num = 90
// arg = 90
// arg = 100
// num = 90