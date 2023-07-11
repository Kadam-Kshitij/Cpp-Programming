#include <iostream>

int main()
{
	float num = 90.9;

	std::cout << static_cast< double >( num ) << std::endl;
	std::cout << static_cast< int >( num ) << std::endl;
}