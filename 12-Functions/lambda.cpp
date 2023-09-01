#include <iostream>

int main()
{
	auto lam = []( int x )->int{ return x + 10; };

	int x{ 0 };
	std::cout << "Enter a number - ";
	std::cin >> x;

	std::cout << "Num + 10 = " << lam( x ) << std::endl;
}