// Pass by address

#include <iostream>

void foo( int* ptr )
{
	std::cout << "*ptr = " << *ptr << std::endl;
	*ptr = 100;
	std::cout << "*ptr = " << *ptr << std::endl;
}

int main()
{
	int num = 90;
	std::cout << "num = " << num << std::endl;
	foo( &num );
	std::cout << "num = " << num << std::endl;
}

// Output

// num = 90
// *ptr = 90
// *ptr = 100
// num = 100