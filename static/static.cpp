#include <iostream>

void foo()
{
	static int val;
	for( int i = 0; i < 10; ++i )
	{
		++val;
		std::cout << val << ", ";
	}
	std::cout << std::endl;
	std::cout << "address = " << &val << std::endl;
}

void goo()
{
	int val;
	for( int i = 0; i < 10; ++i )
	{
		++val;
		std::cout << val << ", ";
	}
	std::cout << std::endl;
	std::cout << "address = " << &val << std::endl;
}

int main()
{
	foo();
	foo();
	goo();
	goo();
}