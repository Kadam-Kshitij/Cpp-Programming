#include <iostream>

int main()
{
	int x = 10, y = 20, z = 30;

	int a = 70;
	auto lam = []( int val )->int{ return val + 10; };
	std::cout << "- " << lam( a ) << std::endl;

	auto lam_1 = [=](){ x = 110; y = 120; };
	lam_1();
	std::cout << "x, y = " << x << ", " << y << std::endl;
}