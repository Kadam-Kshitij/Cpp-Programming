#include <iostream>

int main()
{
	int arr[]{ 1, 4, 7, 6 };
	char s[]{ "Hello" };
	const char* str{ "Alex" };

	std::cout << arr << std::endl;		// Prints address
	std::cout << s << std::endl;		// Prints string
	std::cout << str << std::endl;		// Prints string
	std::cout << ( void* )str << std::endl;		// Prints address

	std::cout << std::size( s ) << std::endl;
}